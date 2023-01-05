class MinStack
{
public:
    vector<pair<int, int>> p;
    MinStack()
    {
        vector<pair<int, int>> p;
    }

    void push(int val)
    {
        if (p.size() == 0)
            p.push_back({val, val});
        else
            p.push_back({val, min(val, p.back().second)});
    }

    void pop()
    {
        p.pop_back();
    }

    int top()
    {
        return p.back().first;
    }

    int getMin()
    {
        return p.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */