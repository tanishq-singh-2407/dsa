/*
    169 (Majority Element)
    Leetcode: https://leetcode.com/problems/majority-element
*/

int majorityElement(vector<int>& nums) {
    int res=0, maj=0;

    for (auto num:nums) {
        if (!maj) res = num;
        maj += (res == num) ? 1 : -1;
    }

    return res;
}