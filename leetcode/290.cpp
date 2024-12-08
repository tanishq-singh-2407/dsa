/*
    290 (Word Pattern)
    Leetcode: https://leetcode.com/problems/word-pattern/description/
*/

#include<iostream>
#include <vector>
using namespace std;

bool wordPattern(string pattern, string s) {
    unordered_map<char, string> unmap;
    unordered_map<string, char> runmap;

    vector<string> str;
    string temp = "";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            temp += s[i];

            if (i == s.size() - 1)
                str.push_back(temp);
        }
        else {
            str.push_back(temp);
            temp = "";
        }
    }

    if (pattern.size() != str.size()) return false;

    for (int i = 0; i < pattern.size(); i++) {
        if (unmap.find(pattern[i]) == unmap.end()) { // not found in forward map
            unmap[pattern[i]] = str[i];

            if (runmap.find(str[i]) == runmap.end()) runmap[str[i]] = pattern[i]; // not found in reverse map
            else return false;
        }
        else if (unmap[pattern[i]] != str[i]) return false;
    }

    return true;
}

int main() {
    cout << wordPattern("abba", "dog cat cat dog") << endl;
    cout << wordPattern("aaaa", "dog cat cat dog") << endl;

    return 0;
}