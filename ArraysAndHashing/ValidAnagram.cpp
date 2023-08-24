#include <string>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.length() != t.length())
        return false;
    map<char,int> sMap;
    map<char,int> tMap;
    for(int it = 0 ; it < s.length() ; it++)
    {
        sMap[s[it]]++;
        tMap[t[it]]++;
    }
    if(sMap != tMap)
        return false;
    return true;
    }
};

//this solution has a time complexity of O(n) and space complexity of O(n)
//we can also sort the strings and compare them. The time complexity will be O(nlogn) and space complexity will be O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.length() != t.length())
        return false;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s != t)
        return false;
    return true;
    }
};

//this solution has a time complexity of O(nlogn) and space complexity of O(1)