#include <iostream>

int dp[46];

int climbStairs(int n) {
	if (n < 3) return n;
	if (dp[n] != -1) return dp[n];

	return dp[n] = climbStairs(n - 1) + climbStairs(n - 2); 
}

int main() {
	unsigned long long int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;

		memset(dp, -1, sizeof(dp));
		dp[0] = 0;
		dp[1] = 1;
		dp[2] = 2;
		std::cout << climbStairs(n) << std::endl;
	}

	return 0;
}
