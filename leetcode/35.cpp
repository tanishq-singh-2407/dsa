// Leetcode: https://leetcode.com/problems/search-insert-position/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& arr, int n) {
        int lo = 0;
        int hi = arr.size() - 1;
        int ans = arr.size();

        while (lo <= hi) {
            int mid = lo + ((hi - lo) / 2);

            if (arr[mid] >= n) {
                ans = mid;
                hi = mid - 1;
            }
            else lo = mid + 1;
        }

        return ans;
    }
};