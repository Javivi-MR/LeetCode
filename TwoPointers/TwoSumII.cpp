#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int> m;
        vector<int> result;
        for(int i = 0 ; i < numbers.size() ; i++)
        {
            if(m.find(numbers[i]) != m.end())
            {
                result.push_back(m[numbers[i]]+1);
                result.push_back(i+1);
                break;
            }
            m[target-numbers[i]] = i;
        }
        return result;
    }
};

// This is a better solution, because it uses the fact that the array is sorted.

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int start = 0;
        int end = numbers.size()-1;
        while(numbers[start] + numbers[end] != target)
        {
            if(numbers[start] + numbers[end] > target)
                end--;
            else
                start++;
        }
        result.push_back(start+1);
        result.push_back(end+1);
        return result;
    }
};