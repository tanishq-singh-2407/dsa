// Leetcode: https://leetcode.com/problems/search-in-rotated-sorted-array/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int getPivot(vector<int>& nums) {
        int N = nums.size();
        int start = 0, end = N - 1;

        while (start <= end) {
            int mid = start + ((end - start) >> 1);
            int next = (mid + 1) % N;
            int prev = (mid - 1 + N) % N;

            if (nums[mid] <= nums[prev] && nums[mid] <= nums[next]) return mid;
            else if (nums[0] <= nums[mid]) start = mid + 1;
            else end = mid - 1;
        }

        return 0;
    }

    int bs(vector<int>& nums, int start, int end, int target) {
        while (start <= end) {
            int mid = start + ((end - start) >> 2);

            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) start = mid + 1;
            else end = mid - 1;
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivot = getPivot(nums);

        if (pivot == 0) return bs(nums, 0, nums.size() - 1, target);
        else {
            return max(bs(nums, 0, pivot - 1, target), bs(nums, pivot, nums.size() - 1, target));
        }
    }
};