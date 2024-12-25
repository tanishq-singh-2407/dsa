#include <iostream>

int maxProfit(int prices[], int n) {
	int minPrice = prices[0], profit = 0;

	for (int i=1; i<n; ++i) {
		profit = std::max(profit, prices[i] - minPrice);
		minPrice = std::min(minPrice, prices[i]);
	}

	return profit;
}

int main() {
	unsigned long long int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;

		int prices[n];
		for (int i=0; i<n; ++i)
			std::cin >> prices[i];

		std::cout << maxProfit(prices, n) << std::endl;
	}

	return 0;
}
