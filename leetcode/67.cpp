/*
    67 (Add Binary)
    Leetcode: https://leetcode.com/problems/add-binary
*/

string addBinary(string a, string b) {
    string A = a.size() > b.size() ? b : a;
    string B = a.size() > b.size() ? a : b;

    while (A.size() != B.size()) {
        A = "0" + A;
    }

    int n = A.size(), carry=0;
    string ans = "";

    for (int i=n-1; i>=0; --i) {
        int bit_A = A[i] == '1' ? 1 : 0;
        int bit_B = B[i] == '1' ? 1 : 0;

        int sum = bit_A + bit_B + carry;

        if(sum == 0) {ans = "0" + ans; carry=0;}
        else if(sum == 1) {ans = "1" + ans; carry=0;}
        else if(sum == 2) {ans = "0" + ans; carry=1;}
        else if(sum == 3) {ans = "1" + ans; carry=1;}
    }

    if (carry) ans = "1" + ans;

    return ans;
}