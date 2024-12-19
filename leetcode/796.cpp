// Leetcode: https://leetcode.com/problems/rotate-string/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;

        for (int i = 0; i < s.size(); ++i) {
            s = s.substr(1) + s[0];

            if (s == goal) return true;
        }

        return false;
    }
};