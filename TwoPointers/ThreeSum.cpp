#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        vector<int> aux;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int start = i+1;
            int end = nums.size() - 1;
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            
            while(start < end)
            {
                if(nums[i] + nums[start] + nums[end] == 0)
                {
                    aux.push_back(nums[i]);
                    aux.push_back(nums[start]);
                    aux.push_back(nums[end]);
                    result.push_back(aux);
                    aux.clear();
                    start++;
                    end--;
                    while(start < end && nums[start] == nums[start-1])
                        start++;
                }
                else if(nums[i] + nums[start] + nums[end] < 0)
                    start++;
                else
                    end--;
            }
        }
        return result;
    }