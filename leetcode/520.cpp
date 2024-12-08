/*
    520 (Detect Capital)
    Leetcode: https://leetcode.com/problems/detect-capital/description/
*/

#include<iostream>
#include <vector>
using namespace std;

bool detectCapitalUse(string word) {
    bool isCapital = (word[1] >= 65 && word[1] <= 90) ? 1 : 0;

    for (int i = 0; i < word.size(); i++) {
        if (isCapital) {
            if (!(word[i] >= 65 && word[i] <= 90)) return false;
        }

        else {
            if (!(word[i] >= 97 && word[i] <= 122) && !(i == 0)) return false;
        }
    }

    return true;
}

int main() {
    cout << detectCapitalUse("Usa") << endl;

    return 0;
}