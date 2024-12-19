// Leetcode: https://leetcode.com/problems/valid-anagram/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int alpha[26] = { 0 };

        for (int i = 0; i < s.size(); ++i)
            alpha[s[i] - 'a']++;

        for (int i = 0; i < t.size(); ++i)
            alpha[t[i] - 'a']--;

        for (int i = 0; i < 26; ++i)
            if (alpha[i] != 0)
                return false;

        return true;
    }
};