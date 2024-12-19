// Leetcode: https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int hsh[52] = { 0 };

        for (int i = 0; i < ranges.size(); i++) {
            hsh[ranges[i][0]] += 1;
            hsh[ranges[i][1] + 1] += -1;
        }

        for (int i = 1; i < 52; ++i)
            hsh[i] += hsh[i - 1];

        for (int i = left; i < right + 1; ++i)
            if (hsh[i] == 0)
                return false;

        return true;
    }
};