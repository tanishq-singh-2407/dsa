/*
    434 (Number of segments in a string)
    Leetcode: https://leetcode.com/problems/number-of-segments-in-a-string/description/
*/

#include<iostream>
#include <vector>
using namespace std;

int countSegments(string s) {
    int ans = 0;
    bool isCounting = false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            isCounting = true;

            if (i == s.size() - 1) ans++;
        }

        else if (isCounting && s[i] == ' ') {
            ans++;
            isCounting = false;
        }
    }

    return ans;
}

int main() {
    cout << countSegments("Hello, my name is John") << endl;

    return 0;
}