// Leetcode: https://leetcode.com/problems/hash-divided-string/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string stringHash(string s, int k) {
        string ans;
        int sum = 0;

        for (int i = 0; i < s.size(); ++i) {
            sum += (s[i] - 'a');

            if (!((i + 1) % k)) {
                sum %= 26;
                ans += (sum + 'a');
                sum = 0;
            }
        }

        return ans;
    }
};