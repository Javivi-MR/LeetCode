#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = -1;
        int start = 0;
        int end = height.size() - 1;
        while(start < end)
        {
            if(height[start] > height[end])
            {
                maxi = max(maxi, height[end]*(end-start));
                end--;
            }
            else
            {
                maxi = max(maxi, height[start]*(end-start));
                start++;
            }   
        }
        return maxi;
    }
};