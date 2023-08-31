#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> s;
        vector<int> result(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++){
            if(i==0){
                s.push(make_pair(temperatures[i],i));
            }else{
                while(!s.empty() && s.top().first < temperatures[i]){
                    auto temp = s.top();
                    s.pop();
                    result[temp.second] = i - temp.second;
                }
                s.push(make_pair(temperatures[i],i));
            }
        }
        return result;
    }
};