class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set<vector<int>> s;
        for (int i = 0; i < n; i++)
        {
            int j = i + 1;
            int k = n - 1;
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0)
                {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++, k--;
                }
                else
                {
                    if (sum < 0)
                        j++;
                    else
                        k--;
                }
            }
        }
        vector<vector<int>> res;
        for (auto ss : s)
            res.push_back(ss);
        return res;
    }
};