#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string::iterator itS = s.begin();
        string::iterator itE = s.end();
        while(itS < itE)
        {
            if(!isalnum(*itS))
            {
                itS++;
                continue;
            }
            if(!isalnum(*itE))
            {
                itE--;
                continue;
            }
            if(tolower(*itS) != tolower(*itE))
                return false;
            itS++;
            itE--;
        }
        return true;
    }
};