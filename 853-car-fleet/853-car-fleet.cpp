class Solution
{
public:
    int carFleet(int target, vector<int> &position, vector<int> &speed)
    {
        vector<pair<int, int>> p;
        int n = position.size();
        for (int i = 0; i < n; i++)
        {
            p.push_back({position[i], speed[i]});
        }
        sort(p.rbegin(), p.rend());
        int res = 1;
        double max_time = (target - p[0].first) * 1.0f / p[0].second;
        for (int i = 1; i < n; i++)
        {
            double time = (target - p[i].first) * 1.0f / p[i].second;
            if (time > max_time)
                res++, max_time = time;
        }

        return res;
    }
};