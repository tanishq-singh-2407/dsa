// Leetcode: https://leetcode.com/problems/single-element-in-a-sorted-array/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); ++i)
            ans ^= nums[i];

        return ans;
    }
};