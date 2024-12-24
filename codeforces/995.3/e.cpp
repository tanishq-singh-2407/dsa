#include <iostream>
#include <map>
#include <vector>

int main() {
	int t;
	std::cin >> t;

	while (t--) {
		/*
		   n -> number of customers
		   k -> maximum number of negative reviews
		   */
		int n, k;
		std::cin >> n >> k;

		/*
		   a[] -> for ith customer, buy with +ve review
		   b[] -> for ith customer, buy with -ve review
		   */
		int a[n], b[n];
		for (int i=0; i<n; ++i) std::cin >> a[i];
		for (int i=0; i<n; ++i) std::cin >> b[i];

		std::map<int, int> prices;

		prices[1] = 0;
		for (int i=0; i<n; ++i) {
			prices[a[i]] = 0;
			prices[b[i]] = 0;
		}

		int i=0;
		for (const auto &val:prices) prices[val.first] = i++;

		std::vector<int> positive(prices.size() + 1, 0);
		for (int i=0; i<n; ++i) {
			positive[prices[1]]++;
			positive[prices[b[i]] + 1]--;
		}
		for (int i=1; i<positive.size(); ++i) positive[i] += positive[i - 1];

		std::vector<int> negative(prices.size() + 1, 0);
		for (int i=0; i<n; ++i) {
			negative[prices[a[i]] + 1]++;
			negative[prices[b[i]] + 1]--;
		}
		for (int i=1; i<negative.size(); ++i) negative[i] += negative[i - 1];

		std::map<int, int> prices_rev;

		for (const auto &val:prices) prices_rev[val.second] = val.first;

		unsigned long long int ans = 0;
		for (i=0; i<prices.size() + 1; ++i)
			if (negative[i] <= k)
				ans = std::max(ans, 1ull * positive[i] * prices_rev[i]);

		std::cout << ans << std::endl;
	}

	return 0;
}
