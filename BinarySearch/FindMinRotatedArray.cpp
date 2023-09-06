#include <vector>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        int mid;
        int mini = nums[j];
        while(i <= j)
        {
            mid = (j+i+1) / 2;
            if(nums[0]<nums[mid])
                i = mid+1;
            else
            {
                mini = min(nums[mid],mini);
                j = mid-1;
            }
        }
        return min(nums[0],mini);
    }
};