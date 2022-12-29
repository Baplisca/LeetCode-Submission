class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector l_s(n + 1, 1), r_s(n + 1, 1);
        for (int i = 0; i < n; i++)
            l_s[i + 1] *= l_s[i] * nums[i];
        for (int i = n - 1; i >= 0; i--)
            r_s[i] *= r_s[i + 1] * nums[i];
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            int ans = l_s[i] * r_s[i + 1];
            res.push_back(ans);
        }
        return res;
    }
};