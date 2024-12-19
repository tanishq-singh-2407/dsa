// Leetcode: https://leetcode.com/problems/maximum-population-year/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int hsh[102] = { 0 };

        for (int i = 0; i < logs.size(); ++i) {
            hsh[logs[i][0] - 1950] += 1;
            hsh[logs[i][1] - 1950] += -1;
        }

        for (int i = 1; i < 102; ++i)
            hsh[i] += hsh[i - 1];

        return (distance(hsh, max_element(hsh, hsh + 101)) + 1950);
    }
};