// Leetcode: https://leetcode.com/problems/smallest-even-multiple/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int smallestEvenMultiple(int n) {
        return (n & 1) ? (n << 1) : n;
    }
};