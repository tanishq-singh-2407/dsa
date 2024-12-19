// Leetcode: https://leetcode.com/problems/convert-date-to-binary/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string intToBinary(int num) {
        string ans = "";

        while (num != 0) {
            ans = to_string(num & 1) + ans;
            num = num >> 1;
        }

        return ans;
    }

    string convertDateToBinary(string date) {
        string ans = intToBinary(stoi(date.substr(0, 4))) + '-' + intToBinary(stoi(date.substr(5, 6))) + '-' + intToBinary(stoi(date.substr(8)));

        return ans;
    }
};