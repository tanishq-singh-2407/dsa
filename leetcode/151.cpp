// Leetcode: https://leetcode.com/problems/reverse-words-in-a-string/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        vector<string> words;
        string word = "";

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ') {
                if (word.size()) {
                    words.push_back(word);
                    word = "";
                }
            }

            else {
                word += s[i];

                if (i == s.size() - 1 && word.size()) {
                    words.push_back(word);
                    word = "";
                }
            }
        }

        for (int i = words.size() - 1; i >= 0; --i)
            ans += (words[i] + " ");

        return ans.substr(0, ans.size() - 1);
    }
};