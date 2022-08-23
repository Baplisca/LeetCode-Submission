class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int, bool> mp;
        int n = nums.size();
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]] = true;
            int sub = target - nums[i];
            if (mp[sub])
            {
                for (int j = 0; j < i; j++)
                {
                    if (nums[j] == sub)
                    {
                        res.push_back(j);
                        res.push_back(i);
                        return res;
                    }
                }
            }
        }
        return res;
    }
};