// Leetcode: https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0, minimum = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            minimum = min(sum, minimum);
        }

        return max(1 - minimum, 1);
    }
};