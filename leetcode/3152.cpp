// Leetcode: https://leetcode.com/problems/special-array-ii/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        if (nums.size() == 1) {
            vector<bool> a(queries.size(), 1);
            return a;
        }

        vector<bool> ans;
        vector<int> hsh(nums.size(), 0);

        for (int i = 1; i < nums.size(); ++i)
            hsh[i] += (((nums[i - 1] & 1) ^ (nums[i] & 1)) + hsh[i - 1]);

        for (int i = 0; i < queries.size(); ++i)
            ans.push_back(
                (queries[i][1] - queries[i][0]) ==
                (hsh[queries[i][1]] - hsh[queries[i][0]])
            );

        return ans;
    }
};