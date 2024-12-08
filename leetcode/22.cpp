/*
    22 (Generate Parentheses)
    Leetcode: https://leetcode.com/problems/generate-parentheses/description/
*/

#include<iostream>
#include <vector>
using namespace std;

string checkValidParenthesis(int p, int n) {
    /*
        p will represent string of open and close brackets, in binary form in range n
        p is integer, it has 32 bit
        but brackets will be only be till last n bits.

        1 represent close bracket
        0 represent open bracket

        like for n=4, 1010 (p=10) -> )()(
            for n=6, 010100 (p=20) -> ()()((
    */

    string ans = "";
    int balance = 0;

    for (int i = n - 1; i >= 0; --i) {
        char bracket = (p & (1 << i)) ? ')' : '(';
        ans += bracket;

        if (bracket == '(') balance++;
        else if (bracket == ')') {
            balance--;

            if (balance < 0) return ""; // More closing brackets than opening brackets
        }
    }

    return balance == 0 ? ans : "";
}

vector<string> generateParenthesis(int n) {
    vector<string> ans;

    for (int i = 0; i < (1 << (n << 1)); i++) { // from 0 to 2^(2*n) - 1
        string temp = checkValidParenthesis(i, n << 1);
        if (temp != "") ans.push_back(temp);
    }

    return ans;
}

int main() {
    vector<string> ans = generateParenthesis(3); // ["((()))","(()())","(())()","()(())","()()()"]

    return 0;
}