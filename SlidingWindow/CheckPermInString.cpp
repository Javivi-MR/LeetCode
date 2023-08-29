#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int start = 0;
        int end = 0;
        bool result = false;
        vector<int> vChr(26,0);
        for(int i = 0 ; i < s1.length() ; i++)
            vChr[s1[i] - 'a']++;
        vector<int> vChr2 = vChr;
        while(end < s2.length() && !result)
        {
            if(vChr[s2[end] - 'a'] == 0)
            {
                if(vChr2[s2[start] - 'a'] > 0)
                {
                    vChr[s2[start] - 'a']++;
                    start++;
                }
                else
                {
                    start++;
                    end = start;
                }
            }
            else
            {
                vChr[s2[end] - 'a']--;
                end++;
            }
            result = true;
            for(int i = 0 ; i < vChr.size() ; i++)
            {
                if(vChr[i] > 0)
                    result = false;
            }
        }
        return result;
    }
};  