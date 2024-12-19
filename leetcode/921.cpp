// Leetcode: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans = 0;

        for (auto& val : s)
            ans += ((val == '(') ? 1 : -1);

        return abs(ans);
    }
};