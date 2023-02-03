class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix[0].size();
        int n = matrix.size();
        int ttl = m * n;
        int l = 0, r = ttl;
        while (r - l > 1)
        {
            int mid = (l + r) / 2;
            int row = mid / m;
            int col = mid % m;
            cout << mid << endl;
            if (matrix[row][col] == target)
                return true;
            else if (matrix[row][col] < target)
                l = mid;
            else
                r = mid;
        }
        int mid = (l + r) / 2;
        return matrix[mid / m][mid % m] == target;
    }
};