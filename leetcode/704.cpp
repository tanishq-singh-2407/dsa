// Leetcode: https://leetcode.com/problems/binary-search/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int to_find) {
        int lo = 0, hi = arr.size() - 1;

        while (lo <= hi) {
            int mid = lo + ((hi - lo) >> 1);

            if (arr[mid] == to_find) return mid;
            else if (arr[mid] > to_find) hi = mid - 1;
            else lo = mid + 1;
        }

        return -1;
    }
};