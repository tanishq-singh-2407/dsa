/*
    415 (Add Strings)
    Leetcode: https://leetcode.com/problems/add-strings/description/
*/

#include<iostream>
#include <vector>
using namespace std;

char intToChar(int a) {
    return a + '0';
}

string addStrings(string num1, string num2) {
    int n1 = num1.size(), n2 = num2.size(), carry = 0;
    string ans = "";

    if (num1 == "0" || num2 == "0") return num1 > num2 ? num1 : num2;
    if (n1 > n2) {
        swap(num1, num2);
        swap(n1, n2);
    }

    for (int i = n2 - 1; i >= 0; --i) {
        int sum = (num2[i] - '0') + carry;
        if (i - (n2 - n1) >= 0) sum += (num1[i - (n2 - n1)] - '0');

        if (sum > 9) {
            ans = intToChar(sum % 10) + ans;
            carry = sum / 10;
        }
        else {
            ans = intToChar(sum) + ans;
            carry = 0;
        }
    }

    if (carry) ans = intToChar(carry) + ans;

    return ans;
}

int main() {
    cout << addStrings("11", "123") << endl;

    return 0;
}