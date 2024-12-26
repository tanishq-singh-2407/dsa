#include <iostream>
#include <vector>

const int N = 1e7 + 10;
int dp[N];

int lis(std::vector<int> &arr, int n) {
	int ans = 1;
	if (dp[n] != -1) return dp[n];

	for (int i=0; i<n; ++i)
		if (arr[i] < arr[n])
			ans = std::max(ans, lis(arr, i) + 1);

	return dp[n] = ans;
}

int main() {
	int t;
	std::cin >> t;

	while (t--) {
		memset(dp, -1, sizeof(dp));
		int n;
		std::vector<int> arr(N);

		std::cin >> n;
		for (int i=0; i<n; ++i) std::cin >> arr[i];

		int ans = 0;
		for (int i=0; i<n; ++i)
			ans = std::max(ans, lis(arr, i));

		std::cout << ans << std::endl;
	}

	return 0;
}
