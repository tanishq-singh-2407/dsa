/*
    205 (Isomorphic Strings)
    Leetcode: https://leetcode.com/problems/isomorphic-strings/description
*/

bool isIsomorphic(string s, string t) {
    unordered_map<char, char> forward;
    unordered_map<char, char> backward;

    for (int i = 0; i < s.size(); i++) {
        if (forward.find(s[i]) == forward.end()) {
            forward[s[i]] = t[i];

            if (backward.find(t[i]) == backward.end())
                backward[t[i]] = s[i];
            else if (backward[t[i]] != s[i])
                return false;
        }

        else if (forward[s[i]] != t[i])
            return false;
    }

    return true;
}