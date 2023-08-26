#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        int maxSequence = 0;
        int auxSequence = 0;
        for(auto it = s.begin() ; it != s.end() ; it++)
        {
            if(s.find(*it-1) == s.end())
            {
                int start = *it;
                while(s.find(start) != s.end())
                {
                    start++;
                    auxSequence++;
                }
                if(auxSequence > maxSequence)
                    maxSequence = auxSequence;
                auxSequence = 0;
            }
        }
        return maxSequence;
    }
};