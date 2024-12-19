// Leetcode: https://leetcode.com/problems/maximum-score-after-splitting-a-string/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxScore(string s) {
        vector<int> zeros(s.size(), 0);
        vector<int> ones(s.size(), 0);

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '0') zeros[i] = 1;
            else ones[i] = 1;
        }

        for (int i = 1; i < s.size(); ++i) {
            zeros[i] += zeros[i - 1];
            ones[i] += ones[i - 1];
        }

        for (int i = 0; i < s.size(); ++i)
            zeros[i] += (ones[s.size() - 1] - ones[i]);

        return *(max_element(zeros.begin(), --zeros.end()));
    }
};