#include <vector>
#include <string>

using namespace std;

class MinStack {
public:
    MinStack() {}
    
    void push(int val) {
        s.push_back(val);
        if(s.size() == 1)
            mins.push_back(val);
        else
        {
            if(mins[mins.size()-1] < val)
                mins.push_back(mins[mins.size()-1]);
            else
                mins.push_back(val);
        }
    }
    
    void pop() {
        s.pop_back();
        mins.pop_back();
    }
    
    int top() {
        return s[s.size()-1];
    }
    
    int getMin() {
        return mins[s.size()-1];
    }
private:
    vector<int> s;
    vector<int> mins;
};

