/*
    171 (Excel Sheet Column Number)
    Leetcode: https://leetcode.com/problems/excel-sheet-column-number/description
*/

#include<iostream>
#include <vector>
using namespace std;

int titleToNumber(string columnTitle) {
    int ans = 0, n = columnTitle.size();

    for (int i = n - 1; i >= 0; --i)
        ans += pow(26, n - i - 1) * ((int)columnTitle[i] - 64);

    return ans;
}

int main() {
    cout << titleToNumber("AA") << endl;
    cout << titleToNumber("FXSHRXW") << endl;

    return 0;
}