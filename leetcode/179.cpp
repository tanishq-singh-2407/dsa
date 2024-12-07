/*
    179 (Largest Number)
    Leetcode: https://leetcode.com/problems/largest-number
*/

static bool compare(int a, int b) {
    string A = to_string(a);
    string B = to_string(b);

    return A + B > B + A;
}

string largestNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end(), compare);

    string ans = "";

    for (auto num : nums)
        ans += to_string(num);

    if (ans[0] == '0')
        return "0";

    return ans;
}
