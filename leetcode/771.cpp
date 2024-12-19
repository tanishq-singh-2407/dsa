// Leetcode: https://leetcode.com/problems/jewels-and-stones/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int stones_count[60] = { 0 };
        int ans = 0;

        for (int i = 0; i < stones.size(); ++i)
            stones_count[stones[i] - 'A']++;

        for (int i = 0; i < jewels.size(); ++i)
            ans += stones_count[jewels[i] - 'A'];

        return ans;
    }
};