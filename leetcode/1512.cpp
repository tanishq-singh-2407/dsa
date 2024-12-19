// Leetcode: https://leetcode.com/problems/number-of-good-pairs/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int nums_count[101] = { 0 };
        int ans = 0;

        for (int i = 0; i < nums.size(); ++i)
            nums_count[nums[i]]++;

        for (int i = 1; i < 101; ++i)
            if (nums_count[i] > 1)
                ans += (nums_count[i] * (nums_count[i] - 1) * 0.5);

        return ans;
    }
};