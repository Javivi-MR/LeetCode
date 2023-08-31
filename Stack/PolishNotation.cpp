#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> stack;
        int result = 0;
        int op1, op2;
        for (int i = 0; i < tokens.size(); i++) {
            if (isdigit(tokens[i][0]) || (tokens[i].size() > 1 && isdigit(tokens[i][1]))) 
                stack.push_back(stoi(tokens[i]));
            else 
            {
                op1 = stack.back();
                stack.pop_back();
                op2 = stack.back();
                stack.pop_back();
                switch (tokens[i][0]) {
                    case '+':
                        result = op1 + op2;
                        break;
                    case '-':
                        result = op2 - op1;
                        break;
                    case '*':
                        result = op1 * op2;
                        break;
                    case '/':
                        result = op2 / op1;
                        break;
                }
                stack.push_back(result);
            }
        }
        if(stack.size() == 1 && result == 0) result += stack[0];
        return result;
    }
};