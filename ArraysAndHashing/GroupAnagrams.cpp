#include <vector>
#include <string>
#include <map>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> strsCpy = strs;
        for (int i = 0; i < strs.size() ; i++)
            sort(strsCpy[i].begin(),strsCpy[i].end()); 

        map<string,vector<string>> m;
        vector<vector<string>> result;

        for(int i = 0 ; i < strs.size() ; i++)
            m[strsCpy[i]].push_back(strs[i]);

        for(auto it = m.begin() ; it != m.end() ; it++)
            result.push_back(it->second);
            
        return result;
    }
};

//this solution has a time complexity of O(n*mlogm) where n is the number of strings and m is the length of the longest string and space complexity of O(n*m)