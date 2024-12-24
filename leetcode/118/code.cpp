#include <iostream>
#include <vector>

int dp[31][31];

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

		std::vector<std::vector<int> > series;
		memset(dp, -1, sizeof(dp));
		dp[1][0] = 1;
        dp[2][0] = 1;
        dp[2][1] = 1;

		for (int i=1; i<=n; ++i) {
			std::vector<int> row;

			for (int j=0; j<i; ++j)
				row.push_back(num(i, j));

			series.push_back(row);
			row.clear();
		}

		for (const auto &row : series) {
			for (const auto &index : row)
				std::cout << index << " ";

			std::cout << std::endl;
		}
	}

	return 0;
}
