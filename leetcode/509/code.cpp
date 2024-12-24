#include<iostream>

const int N = 1e7+10;
int dp[N];

int fib(int n) {
	if (n < 2) return n;
	if (dp[n] != -1) return dp[n];

	return dp[n] = fib(n - 1) + fib(n - 2);
}

int main() {
	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;

		memset(dp, -1, sizeof(dp));
		dp[0] = 0;
		dp[1] = 1;
		std::cout << fib(n) << std::endl;	
	}

	return 0;
}
