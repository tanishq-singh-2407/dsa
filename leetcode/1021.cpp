// Leetcode: https://leetcode.com/problems/remove-outermost-parentheses/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";

        int count = 0;
        string subset = "";

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') count++;
            else count--;

            if (!(count == 0 && s[i] == ')'))
                subset += s[i];

            if (count == 0) {
                ans += subset.substr(1);
                subset = "";
            }
        }

        return ans;
    }
};