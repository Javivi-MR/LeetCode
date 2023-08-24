#include <vector>
#include <map>
#include <queue>
#include <iostream>
    
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(int it = 0 ; it < nums.size() ; it++)
            m[nums[it]]++;
        int max = 0;
        int num = 0;
        vector<int> result;
        while(k > 0)
        {
            for(auto it = m.begin(); it != m.end(); it++)
            {
                if(it->second > max)
                {
                    max = it->second;
                    num = it->first;
                }
            }
            max = 0;
            result.push_back(num);
            m.erase(num);
            k--;
        }
        return result;
    }
};

//this solution has a time complexity of O(n) and space complexity of O(n) using map