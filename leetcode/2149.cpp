// Leetcode: https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;

        queue<int> pos;
        queue<int> neg;

        for (auto& val : nums) {
            if (val < 0) neg.push(val);
            else pos.push(val);
        }

        for (int i = 0; i < nums.size(); ++i) {
            if (i & 1) { // odd iteration
                ans.push_back(neg.front());
                neg.pop();
            }
            else { // even iteration
                ans.push_back(pos.front());
                pos.pop();
            }
        }

        return ans;
    }
};