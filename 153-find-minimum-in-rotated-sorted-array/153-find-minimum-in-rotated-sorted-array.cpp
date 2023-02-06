class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int n = nums.size();
        int ma = n - 1;
        int mi = 0;
        // corner case
        if (nums[0] < nums[n - 1])
            return nums[0];
        while (ma - mi > 1)
        {
            int mid = (ma + mi) / 2;
            // Target must be less than or equal to mid index
            if (nums[ma] > nums[mid])
                ma = mid;
            else
                mi = mid; // Target must between mid and ma index
        }
        return nums[ma];
    }
};