#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<double> numsSet(nums.begin(),nums.end());
        for(int i = 1; i < nums.size()+1 ; i++)
        {
            if(numsSet.find(i) == numsSet.end())
                return i;
        }
        return nums.size()+1;
    }
};