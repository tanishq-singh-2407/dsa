// Leetcode: https://leetcode.com/problems/find-the-highest-altitude/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0, maximum = 0;

        for (int i = 0; i < gain.size(); i++) {
            sum += gain[i];
            maximum = max(sum, maximum);
        }

        return maximum;
    }
};