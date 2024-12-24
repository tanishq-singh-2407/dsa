// Leetcode: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int pf[510] = { 0 };
        vector<int> ans(nums.size());

        for (int i = 0; i < nums.size(); ++i)
            pf[nums[i]]++;

        for (int i = 1; i < 510; ++i)
            pf[i] = pf[i] + pf[i - 1];

        for (int i = 0; i < nums.size(); ++i)
            ans[i] = nums[i] - 1 >= 0 ? pf[nums[i] - 1] : 0;

        return ans;
    }
};