class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        int n = tokens.size();
        stack<int> S;
        for (int i = 0; i < n; i++)
        {
            string s = tokens[i];
            if (s == "+" || s == "-" || s == "*" || s == "/")
            {
                int num1 = S.top();
                S.pop();
                int num2 = S.top();
                S.pop();
                int res = 0;
                if (s == "+")
                    res = num2 + num1;
                else if (s == "-")
                    res = num2 - num1;
                else if (s == "*")
                    res = num2 * num1;
                else
                    res = num2 / num1;
                S.push(res);
            }
            else
            {
                int num = stoi(s);
                S.push(num);
            }
        }
        return S.top();
    }
};