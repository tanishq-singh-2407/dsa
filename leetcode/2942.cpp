// Leetcode: https://leetcode.com/problems/find-words-containing-character/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;

        for (int i = 0; i < words.size(); ++i)
            for (int j = 0; j < words[i].size(); ++j)
                if (words[i][j] == x) {
                    ans.push_back(i);
                    break;
                }

        return ans;
    }
};