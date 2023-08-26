#include <vector>
#include <math.h>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul = 1;
        bool oneZero = false;
        int index = -1;
        bool twoZeros = false;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(!oneZero && nums[i] == 0)
            {
                index = i;
                oneZero = true;
                continue;
            }
            if(oneZero && nums[i] == 0)
            {
                oneZero = false;
                twoZeros = true;
                mul = 0;
            }
            if(nums[i] != 0)
                mul *= nums[i];
        }
            
        vector<int> result(nums.size(),0);
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(oneZero)
            {
                result[index] = mul;
                break;
            }
            if(twoZeros)
            {
                return result;
            }
            result[i] = mul * pow(nums[i],-1);
        }
        return result;
    }
};

//this solution is O(n) time and O(1) space