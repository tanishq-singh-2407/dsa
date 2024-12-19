// Leetcode: https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans(2);
        int j = 0;

        int arr[101] = { 0 };

        for (int i = 0; i < nums.size(); ++i)
            arr[nums[i]]++;

        for (int i = 0; i < 101; ++i)
            if (arr[i] == 2)
                ans[j++] = i;

        return ans;
    }
};