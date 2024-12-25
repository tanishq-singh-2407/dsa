#include <iostream>
#include <map>

int main() {
	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;

		int arr[n];
		for (int i=0; i<n; ++i) std::cin >> arr[i];

		std::map<int, int> late;
		for (int i=0; i<n; ++i)
			late[arr[i]] = std::max(i + 1, late[arr[i]]);	

		int ans = 0;
		for (const auto &val : late)
			ans += val.second;

		std::cout << ans << std::endl;
	}

}
