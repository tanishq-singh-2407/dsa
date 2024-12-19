// Leetcode: https://leetcode.com/problems/find-the-middle-index-in-array/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        if (nums.size() == 1) return 0;

        vector<int> hsh;
        hsh.push_back(0);

        for (int i = 1; i < nums.size(); ++i)
            nums[i] += nums[i - 1];

        for (int i = 0; i < nums.size(); ++i)
            hsh.push_back(nums[i]);

        hsh.push_back(nums[nums.size() - 1]);

        for (int i = 1; i < hsh.size() - 1; i++)
            if (hsh[i - 1] == (hsh[hsh.size() - 1] - hsh[i]))
                return i - 1;

        return -1;
    }
};