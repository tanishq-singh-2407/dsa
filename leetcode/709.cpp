/*
    709 (To Lower Case)
    Leetcode: https://leetcode.com/problems/to-lower-case/description/
*/

#include<iostream>
#include <vector>
using namespace std;

string toLowerCase(string s) {
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= 65 && s[i] <= 90) s[i] += 32;

    return s;
}

int main() {
    cout << toLowerCase("asdFAS;;as") << endl;
    
    return 0;
}