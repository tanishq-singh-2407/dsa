/*
    303 (Range Sum Query - Immutable)
    Leetcode: https://leetcode.com/problems/range-sum-query-immutable/description/
*/

#include<iostream>
#include <vector>
using namespace std;

const int N = 1e4 + 7;
int arr[N];

class NumArray {
public:
    NumArray(vector<int>& nums) {
        arr[1] = nums[0];

        for (int i = 1; i < nums.size(); i++)
            arr[i + 1] = arr[i] + nums[i];
    }

    int sumRange(int left, int right) {
        return arr[right + 1] - arr[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */