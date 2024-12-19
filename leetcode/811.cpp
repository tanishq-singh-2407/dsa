// Leetcode: https://leetcode.com/problems/subdomain-visit-count/description/

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> split(string s, char sep = ' ') {
        vector<string> ans;
        string temp = "";

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != sep) temp += s[i];
            else if (temp.size()) {
                ans.push_back(temp);
                temp = "";
            }
        }

        if (temp.size()) ans.push_back(temp);

        return ans;
    }

    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int> counts;
        vector<string> ans;

        for (int i = 0; i < cpdomains.size(); ++i) {
            vector<string> cpdomain_list = split(cpdomains[i]);

            int visited_count = stoi(cpdomain_list[0]);
            vector<string> domains_visited = split(cpdomain_list[1], '.');

            string temp = "";
            for (int j = domains_visited.size() - 1; j >= 0; --j) {
                temp = domains_visited[j] + (temp.size() == 0 ? "" : ".") + temp;
                counts[temp] += visited_count;
            }
        }

        for (auto& val : counts)
            ans.push_back(to_string(val.second) + " " + val.first);

        return ans;
    }
};