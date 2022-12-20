class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.size();
        string res = "";
        for (int i = 0; i < n; i++)
        {
            int res1 = 0, res2 = 0;
            int left1 = i, right1 = i, left2 = i, right2 = i + 1;
            while (left1 - 1 >= 0 && right1 + 1 < n && s[left1 - 1] == s[right1 + 1])
            {
                left1--, right1++;
            }
            if (right2 < n && s[left2] == s[right2])
            {
                while (left2 - 1 >= 0 && right2 + 1 < n && s[left2 - 1] == s[right2 + 1])
                {
                    left2--, right2++;
                }
            }
            else
                right2--;

            int ma = max(right1 - left1 + 1, right2 - left2 + 1);

            if (ma > res.size())
            {
                if (ma == right1 - left1 + 1)
                    res = s.substr(left1, ma);
                else
                    res = s.substr(left2, ma);
            }
        }
        return res;
    }
};