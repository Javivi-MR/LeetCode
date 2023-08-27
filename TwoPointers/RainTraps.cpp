#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int traps = 0;
        int start = 0;
        int end = height.size() - 1; 
        int maxStart = height[start];
        int maxEnd = height[end];
        while(start < end)
        {
            if(maxStart < maxEnd)
            {
                start++;
                if(min(maxStart,maxEnd) - height[start] > 0)
                    traps += min(maxStart,maxEnd) - height[start];
                maxStart = max(maxStart,height[start]);
            }
            else
            {
                end--;
                if(min(maxStart,maxEnd) - height[end] > 0)
                    traps += min(maxStart,maxEnd) - height[end];
                maxEnd = max(maxEnd,height[end]);
            }
        }
        return traps;
    }
};