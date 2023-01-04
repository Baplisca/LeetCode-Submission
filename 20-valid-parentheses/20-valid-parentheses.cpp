class Solution
{
public:
    bool isValid(string s)
    {
        int n = s.size();
        stack<char> S;
        for (int i = 0; i < n; i++)
        {
            if (S.size() == 0 || s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                S.push(s[i]);
                continue;
            }
            char c = S.top();
            S.pop();
            if (c == '(' && s[i] == ')')
                continue;
            else if (c == '{' && s[i] == '}')
                continue;
            else if (c == '[' && s[i] == ']')
                continue;
            return false;
        }
        return !S.size();
    }
};