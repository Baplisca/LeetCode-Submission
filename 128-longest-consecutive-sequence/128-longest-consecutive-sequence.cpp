class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> s(nums.begin(), nums.end());
        int res = 0;
        for (auto num : nums)
        {
            if (s.find(num - 1) != s.end())
            {
                continue;
            }
            int cnt = 1;
            while (s.find(++num) != s.end())
            {
                cnt++;
            }

            res = max(res, cnt);
        }
        return res;
    }
};