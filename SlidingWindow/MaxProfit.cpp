#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int start = 0;
        int end = 1;
        while(end < prices.size())
        {
            if(prices[end] - prices[start] > 0)
                profit = max(profit,prices[end] - prices[start]);
            else
                start = end;
            end++;
        }
        return profit;
    }
};