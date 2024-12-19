// Leetcode: https://leetcode.com/problems/sort-vowels-in-a-string/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowels;

        for (int i = 0; i < s.size(); ++i) {
            if (
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
                s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
                )
            {
                vowels.push_back(s[i]);
                s[i] = '_';
            }
        }

        sort(vowels.begin(), vowels.end());

        int j = 0;
        for (int i = 0; i < s.size(); ++i)
            if (s[i] == '_')
                s[i] = vowels[j++];

        return s;
    }
};