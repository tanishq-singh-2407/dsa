#include <iostream>

const int N = 1e7 + 10;
int dp[N];

int minPrice(int height[], int till, int &k) {
	if (till == 0) return 0;
	if (dp[till] != -1) return dp[till];

	int ans = INT_MAX;

	for (int i=1; i<=k; ++i)
		if (till - i >= 0)
			ans = std::min(ans, std::abs(height[till] - height[till - i]) + minPrice(height, till - i, k));

	return dp[till] = ans;	
};

int main() {
	int t;
	std::cin >> t;

	while (t--) {
		int n, k;
		std::cin >> n >> k;

		int height[n];
		for (int i=0; i<n; ++i) std::cin >> height[i];

		memset(dp, -1, sizeof(dp));
		dp[0] = 0;

		std::cout << minPrice(height, n-1, k) << std::endl;;
	}

	return 0;
}
