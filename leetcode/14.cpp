// Leetcode: https://leetcode.com/problems/longest-common-prefix/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        char check;

        for (int i = 0; i < (*min_element(strs.begin(), strs.end())).size(); ++i) {
            check = strs[0][i];

            for (int j = 1; j < strs.size(); ++j)
                if (check != strs[j][i])
                    return ans;

            ans += check;
        }

        return ans;
    }
};