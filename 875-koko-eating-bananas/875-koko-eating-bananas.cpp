class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int n = piles.size();
        sort(piles.begin(), piles.end());
        int ma = piles[n - 1] + 1; // max + 1
        int mi = 0;                // min - 1
        while (ma - mi > 1)
        {
            int mid = (ma + mi) / 2;
            long long cnt = 0;
            for (int i = 0; i < n; i++)
            {
                cnt += (piles[i] + mid - 1) / mid;
            }
            if (cnt <= h)
                ma = mid;
            else
                mi = mid;
        }
        return ma;
    }
};