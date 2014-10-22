class Solution {
    public:
        int minPathSum(vector<vector<int> > &grid) {
            int m = grid.size(), n = grid[0].size();
            vector<int> f(n + 1, INT_MAX);

            f[1] = 0;
            for (int i = 0; i < m; i++)
                for (int j = 0; j < n; j++)
                    f[j + 1] = min(f[j], f[j + 1]) + grid[i][j];

            return f[n];
        }
};
