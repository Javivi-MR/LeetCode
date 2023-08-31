#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) 
    {
        int open = 1;
        int close = 0;
        string str = "(";
        vector<string> result;

        build(open,close,str,n,result);

        return result;
    }

    void build(int open, int close, string str, int n, vector<string>& result)
    {
        if(str.length() == 2*n)
            result.push_back(str);
        if(open < n)
            build(open+1,close,str+'(',n,result);
        if(close < open)
            build(open,close+1,str+')',n,result);
    }
};