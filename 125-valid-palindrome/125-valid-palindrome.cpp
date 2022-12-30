class Solution
{
public:
    bool isPalindrome(string s)
    {
        string S = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z') || ('0' <= s[i] && s[i] <= '9'))
                S += s[i];
        }

        int n = S.size();
        for (int i = 0; i < n / 2; i++)
        {
            int m = n - 1 - i;
            if (tolower(S[i]) == tolower(S[m]))
                continue;
            return false;
        }
        return true;
    }
};