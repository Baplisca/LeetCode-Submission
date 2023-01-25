class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int n = temperatures.size();
        int m = 101;
        vector<vector<int>> v(m);
        for (int i = 0; i < n; i++)
        {
            v[temperatures[i]].push_back(i);
        }
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            int num = temperatures[i];
            int candi = 1000010;
            for (int j = num + 1; j < m; j++)
            {
                int idx = lower_bound(v[j].begin(), v[j].end(), i + 1) - v[j].begin();
                if (idx == v[j].size())
                    continue;
                candi = min(candi, v[j][idx] - i);
            }
            if (candi == 1000010)
                res.push_back(0);
            else
                res.push_back(candi);
        }
        return res;
    }
};