// Leetcode: https://leetcode.com/problems/defanging-an-ip-address/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";

        for (int i = 0; i < address.size(); ++i) {
            if (address[i] == '.') ans += "[.]";
            else ans += address[i];
        }

        return ans;
    }
};