class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int n = numbers.size();
        for (int i = 0; i < n; i++)
        {
            int num = numbers[i];
            int idx = lower_bound(numbers.begin(), numbers.end(), target - num) - numbers.begin();
            if (idx == i)
                idx++;
            if (idx >= n)
                continue;
            int candidate = numbers[idx];
            if (num + candidate == target)
                return vector<int>{i + 1, idx + 1};
        }
        return vector<int>{1, 2};
    }
};