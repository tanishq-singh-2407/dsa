// Leetcode: https://leetcode.com/problems/reverse-prefix-of-word/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans = "";

        for (int i = 0; i < word.size(); ++i) {
            ans += word[i];

            if (word[i] == ch) {
                reverse(ans.begin(), ans.end());
                ans += word.substr(i + 1);

                break;
            }
        }

        return ans;
    }
};