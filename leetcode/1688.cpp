// Leetcode: https://leetcode.com/problems/count-of-matches-in-tournament/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int aaaa = 0;
    int numberOfMatches(int n) {
        if (n == 1) return aaaa;
        aaaa += (n & 1) ? ((n - 1) >> 1) : (n >> 1);

        return numberOfMatches(n & 1 ? (((n - 1) >> 1) + 1) : (n >> 1));
    }
};