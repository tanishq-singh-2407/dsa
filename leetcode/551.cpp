/*
    551 (Student Attendance Record I)
    Leetcode: https://leetcode.com/problems/student-attendance-record-i/description/
*/

#include<iostream>
#include <vector>
using namespace std;

bool checkRecord(string s) {
    int absent = 0;
    int late = 0;

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];

        if (absent > 1 || late > 2) return false;

        if (c == 'A') {
            absent++;
            if (late) late--;
        }
        else if (c == 'L') late++;
        else if (late) late = 0;
    }

    return (absent > 1 || late > 2) ? false : true;
}

int main() {
    cout << checkRecord("PPALLL") << endl;

    return 0;
}