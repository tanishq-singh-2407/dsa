// Leetcode: https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;

        for (int i = 0; i < boxes.size(); ++i) { // ith pe baal rakhni h
            int sum = 0;

            for (int j = 0; j < boxes.size(); ++j) // jth se inkal ke
                if (boxes[j] - '0')
                    sum += (abs(i - j));

            ans.push_back(sum);
        }

        return ans;
    }
};