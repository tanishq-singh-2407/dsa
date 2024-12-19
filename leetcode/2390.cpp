// Leetcode: https://leetcode.com/problems/removing-stars-from-a-string/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        string ans = "";

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '*') ans.pop_back();
            else ans.push_back(s[i]);
        }

        return ans;
    }
};