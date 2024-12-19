// Leetcode: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxElement = *max_element(candies.begin(), candies.end());
        vector<bool> ans(candies.size());

        for (int i = 0; i < candies.size(); ++i)
            ans[i] = (candies[i] + extraCandies >= maxElement) ? true : false;

        return ans;
    }
};