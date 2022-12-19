class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        int res = 0;
        map<char, int> mp;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[s[i]] != 0)
            {
                cnt = (i + 1) - mp[s[i]];
                for (char c = 'a'; c <= 'z'; c++)
                {
                    if (mp[c] < mp[s[i]])
                        mp[c] = 0;
                }
                mp[s[i]] = i + 1;
                continue;
            }
            mp[s[i]] = i + 1;
            cnt++;
            res = max(res, cnt);
        }
        return res;
    }
};