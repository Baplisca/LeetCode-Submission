class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        map<string, vector<string>> mp;
        for (int i = 0; i < strs.size(); i++)
        {
            string str = strs[i];
            sort(str.begin(), str.end());
            mp[str].push_back(strs[i]);
        }
        vector<vector<string>> res(mp.size());
        int idx = 0;
        for (auto m : mp)
        {
            for (int j = 0; j < m.second.size(); j++)
            {
                res[idx].push_back(m.second[j]);
            }
            idx++;
        }
        return res;
    }
};