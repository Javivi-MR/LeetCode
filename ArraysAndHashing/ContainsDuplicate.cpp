#include <algorithm>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int times = 1; 
        sort(nums.begin(), nums.end());  // sort the array  O(nlogn)
        for(int it = 0 ; it < nums.size()-1 ; it++)   // O(n)
        {
            if(nums[it] == nums[it+1])
                return true;
        }
        return false;
    }
};

//this solution has a time complexity of O(nlogn) + O(n) = O(nlogn) and space complexity of O(1)
//We can also use a set to solve this problem. The time complexity will be O(n) and space complexity will be O(n)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s; // space complexity O(n)
        for(int it = 0 ; it < nums.size() ; it++)  // O(n)
        {
            if(s.find(nums[it]) != s.end())
                return true;
            s.insert(nums[it]);
        }
        return false;
    }
};

//this solution has a time complexity of O(n) and space complexity of O(n)