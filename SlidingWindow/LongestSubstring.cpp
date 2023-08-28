#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> sSet;
        string subS = "";
        size_t maxLen = 0;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(sSet.find(s[i]) == sSet.end())
            {
                subS += s[i];
                sSet.insert(s[i]); 
            }
            else
            {
                while(sSet.find(s[i]) != sSet.end())
                {
                    sSet.erase(subS[0]);
                    subS.erase(0,1); 
                }
                subS += s[i];
                sSet.insert(s[i]); 
            }
            maxLen = max(maxLen, subS.length());
        }
        return maxLen;
    }
};