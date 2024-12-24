#include <iostream>

// Brute force
// int countPairs(std::vector<int>& nums, int target) {
// 	int ans = 0;
// 
// 	for (int i=0; i<nums.size(); ++i)
// 		for (int j=i+1; j<nums.size(); ++j)
// 			if (nums[i] + nums[j] < target) ans++;
// 
// 	return ans; 
// }

int countPairs(std::vector<int> &nums, int target) {
	sort(nums.begin(), nums.end());

	int ans = 0, lo = 0, hi = nums.size() - 1;

	while (lo < hi) {
		if (nums[lo] + nums[hi] < target) {
			ans += hi - lo;
			lo++;
		} else hi--;
	}

	return ans;
}

int main() {
	int t;
	std::cin >> t;

	while (t--) {
		int target, n;
		std::cin >> target >> n;

		std::vector<int> nums(n);
		for (int i=0; i<n; ++i) std::cin >> nums[i];
		std::cout << countPairs(nums, target) << std::endl;
	}

	return 0;
}
