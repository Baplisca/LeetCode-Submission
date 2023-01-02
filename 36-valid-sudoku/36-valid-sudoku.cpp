class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        // row search
        for (int i = 0; i < 9; i++)
        {
            map<int, bool> mp;
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] == '.')
                    continue;
                int num = board[i][j] - '0';
                if (mp[num])
                    return false;
                mp[num] = true;
            }
        }
        // col search
        for (int j = 0; j < 9; j++)
        {
            map<int, bool> mp;
            for (int i = 0; i < 9; i++)
            {
                if (board[i][j] == '.')
                    continue;
                int num = board[i][j] - '0';
                if (mp[num])
                    return false;
                mp[num] = true;
            }
        }
        // 3x3 grid search
        for (int ii = 0; ii < 3; ii++)
        {
            for (int jj = 0; jj < 3; jj++)
            {
                map<int, bool> mp;
                int row = 3 * ii;
                int col = 3 * jj;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        int I = row + i;
                        int J = col + j;
                        if (board[I][J] == '.')
                            continue;
                        int num = board[I][J] - '0';
                        if (mp[num])
                            return false;
                        mp[num] = true;
                    }
                }
            }
        }
        return true;
    }
};