/*
    28 (Find the Index of the First Occurrence in a String)
    Leetcode: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
*/

#include<iostream>
#include <vector>
using namespace std;

int strStr(string haystack, string needle) {
    char s = needle[0];

    for (int i = 0; i < haystack.size(); i++) {
        if (haystack[i] != s) continue;

        for (int j = 0, k = i; j < needle.size(); j++, k++) {
            if (haystack[k] != needle[j]) break;
            else if ((haystack[k] == needle[j]) && (j == needle.size() - 1)) return i;
        }
    }

    return -1;
}

int main() {

    cout << strStr("mississippi", "issip") << endl;

    return 0;
}