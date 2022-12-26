class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int, int>> freq;
        for (auto m : mp)
        {
            freq.push_back({m.second, m.first});
        }
        sort(freq.rbegin(), freq.rend());
        vector<int> res;
        for (int i = 0; i < k; i++)
            res.push_back(freq[i].second);
        return res;
    }
};