#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indexs;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            for(int j = i + 1 ; j < nums.size() ; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    indexs.push_back(i);
                    indexs.push_back(j);
                }
            }
        }
        return indexs;
    }
};

//this solution has a time complexity of O(n^2) and space complexity of O(1) using brute force
//we can also, use a map to solve this problem. The time complexity will be O(n) and space complexity will be O(n)
//we will store the difference between the target and the current element in the map and check if the difference is present in the map

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indexs;
        map<int,int> m;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(m.find(nums[i]) != m.end())
            {
                indexs.push_back(m[nums[i]]);
                indexs.push_back(i);
            }
            m[target - nums[i]] = i;
        }
        return indexs;
    }
};

//this solution has a time complexity of O(n) and space complexity of O(n) using map
