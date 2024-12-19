// Leetcode: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;

        for (int i = 0; i < operations.size(); ++i)
            ans += operations[i][1] == '+' ? 1 : -1;

        return ans;
    }
};