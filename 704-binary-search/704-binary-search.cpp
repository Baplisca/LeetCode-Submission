class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int idx = lower_bound(nums[0].begin(), nums[].end(), target) - nums[0].begin();
        int res = -1;
        if (idx != n && nums[idx] == target)
            res = idx;
        return res;
    }
};