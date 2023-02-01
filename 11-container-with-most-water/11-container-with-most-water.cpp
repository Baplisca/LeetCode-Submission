class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int res = 0;
        int i = 0, j = n - 1;
        while (i < j)
        {
            int sum = (j - i) * min(height[i], height[j]);
            res = max(res, sum);
            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        return res;
    }
};