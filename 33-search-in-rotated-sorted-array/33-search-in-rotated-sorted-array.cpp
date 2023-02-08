class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        // corner case
        if (nums[0] == target)
            return 0;
        if (nums[nums.size() - 1] == target)
            return nums.size() - 1;
        int mi = 0, ma = nums.size() - 1;
        while (ma - mi > 1)
        {
            int mid = (ma + mi) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < nums[ma])
            {
                // target < nums[mid] or nums[mid] < target <= nums[ma]
                if (nums[mid] > target || nums[ma] < target)
                    ma = mid;
                else
                    mi = mid;
            }
            else
            {
                // nums[mid] > nums[ma]
                // nums[mid], target, nums[ma]
                // target, nums[mid], nums[ma]
                if (target > nums[mid] || nums[ma] > target)
                    mi = mid;
                else
                    ma = mid;
            }
        }
        return (nums[ma] == target ? ma : -1);
    }
};