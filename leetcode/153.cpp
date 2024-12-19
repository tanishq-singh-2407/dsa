// Leetcode: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            int next = (mid + 1) % n;
            int prev = (mid + n - 1) % n;

            if (nums[mid] <= nums[prev] && nums[mid] <= nums[next]) return nums[mid];
            else if (nums[mid] >= nums[0]) start = mid + 1;
            else end = mid - 1;
        }

        return nums[0];
    }
};