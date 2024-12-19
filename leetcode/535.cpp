// Leetcode: https://leetcode.com/problems/encode-and-decode-tinyurl/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    map<string, string> hsh;
    int pointer = 0;

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string url = "https://tinyurl.com/" + to_string(pointer++);
        hsh[url] = longUrl;
        return url;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return hsh[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));