#include <iostream>
#include <vector>

int dp[35][35];

int num(int n, int i) {
	if (i <= 0 || i == n - 1) return 1;
	if(dp[n][i] != -1) return dp[n][i];

	return dp[n][i] = num(n - 1, i - 1) + num(n - 1, i);
}

int main() {
	unsigned long long int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;

		memset(dp, -1, sizeof(dp));
		dp[1][0] = 1;
		dp[2][0] = 1;
		dp[2][1] = 1;

		std::vector<int> row;
		for (int j=0; j<n+1; ++j)
			row.push_back(num(n + 1, j));

		for (const auto &index : row)
			std::cout << index << " ";
		std::cout << std::endl;
		row.clear();
	}

	return 0;
}

