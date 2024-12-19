// Leetcode: https://leetcode.com/problems/richest-customer-wealth/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int users[51] = { 0 };
        int ans = users[0];

        for (int i = 0; i < accounts.size(); ++i)
            for (int j = 0; j < accounts[i].size(); ++j)
                users[i] += accounts[i][j];

        for (auto& balance : users)
            ans = max(ans, balance);

        return ans;
    }
};