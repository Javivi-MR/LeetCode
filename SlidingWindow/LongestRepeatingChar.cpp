#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
int characterReplacement(string s, int k) {
    vector<int> freq(26,0);
    int start = 0, end = 0, maxLen = 0, greater = 0;

    while (end < s.length()) 
    {
        freq[s[end]-'A']++;

        greater = max(greater, freq[s[end]-'A']);
    
        if (end - start + 1 - greater > k) {
            freq[s[start]-'A']--;
            start++; 
        }
    
        maxLen = max(maxLen, end-start+1);
        end++;
    }

    return maxLen;
}
};