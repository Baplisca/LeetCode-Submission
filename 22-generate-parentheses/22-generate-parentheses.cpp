class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> res;
        for (int i = 0; i < (1 << (2 * n)); i++)
        {
            string s = "";
            for (int j = 0; j < 2 * n; j++)
            {
                if ((i >> j) & 1)
                    s += "(";
                else
                    s += ")";
            }
            if (judge(s))
                res.push_back(s);
        }
        return res;
    }

    bool judge(string s)
    {
        int l = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                l++;
            else
            {
                if (l > 0)
                    l--;
                else
                    return false;
            }
        }
        return l == 0;
    }
};