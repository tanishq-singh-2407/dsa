/*
    412 (Fizz Buzz)
    Leetcode: https://leetcode.com/problems/fizz-buzz/description/
*/

#include<iostream>
#include <vector>
using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> ans(n);

    for (int i = 0; i < n; i++) {
        if ((i + 1) % 15 == 0) ans[i] = "FizzBuzz";
        else if ((i + 1) % 3 == 0) ans[i] = "Fizz";
        else if ((i + 1) % 5 == 0) ans[i] = "Buzz";
        else ans[i] = to_string(i + 1);
    }

    return ans;
}

int main() {
    vector<string> ans = fizzBuzz(3);

    for (int i=0; i<ans.size(); i++)
        cout << ans[i] << endl;

    return 0;
}