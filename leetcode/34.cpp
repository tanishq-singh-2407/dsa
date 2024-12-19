// Leetcode: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;

        auto lb = lower_bound(nums.begin(), nums.end(), target);
        if (lb == nums.end() || *lb != target) {
            ans.push_back(-1);
            ans.push_back(-1);
        }

        else {
            ans.push_back(distance(nums.begin(), lb));
            ans.push_back(distance(nums.begin(), upper_bound(nums.begin(), nums.end(), target)) - 1);
        }

        return ans;
    }
};