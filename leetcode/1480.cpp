/*
    1480 (Running sum of 1D Array)
    Leetcode: https://leetcode.com/problems/running-sum-of-1d-array
*/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            nums[i] += sum;
            sum = nums[i];
        }

        return nums;
    }
};