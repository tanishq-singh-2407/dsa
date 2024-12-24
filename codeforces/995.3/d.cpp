#include <iostream>

int main() {
	int t;
	std::cin >> t;

	while (t--) {
		int n, x, y;
		std::cin >> n >> x >> y;

		int long long a[n], sum = 0;
		for (int i=0; i<n; ++i) std::cin >> a[i];
		for (int i=0; i<n; ++i) sum += a[i];
		std::sort(a, a + n);

		int long long ans = 0, lo = 0, hi = n - 1;

		while (lo < hi) {
			if (a[lo] + a[hi] <= sum - x) {
				ans += (hi - lo);
				lo++;
			} else hi--;
		};

		lo = 0; hi = n - 1;

		while (lo < hi) {
			if (a[lo] + a[hi] < sum - y) {
				ans -= (hi - lo);
				lo++;
			} else hi--;
		}

		std::cout << ans << std::endl;
	}

	return 0;
}
