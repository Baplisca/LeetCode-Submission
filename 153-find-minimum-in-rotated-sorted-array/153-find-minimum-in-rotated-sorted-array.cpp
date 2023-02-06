class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int n = nums.size();
        int ma = n - 1;
        int mi = 0;
        if (nums[0] < nums[n - 1])
            return nums[0];
        while (ma - mi > 1)
        {
            cout << ma << " " << mi << " " << endl;
            int mid = (ma + mi) / 2;
            if (nums[ma] > nums[mid])
                ma = mid;
            else
                mi = mid;
        }
        return nums[ma];
    }
};