class Solution {
public:
    pair<int, int> solve(vector<vector<int>>& grid, int i, int j,
                         vector<vector<pair<int, int>>>& dp) {

        int n = grid.size();
        const int MOD = 1e9 + 7;

        if (dp[i][j].first != -1) {
            return dp[i][j];
        }

        if (i == n - 1 && j == n - 1) {
            return dp[i][j] = {1, grid[i][j]};
        }

        pair<int, int> right = {0, INT_MIN};
        pair<int, int> down = {0, INT_MIN};

        if (grid[i][j] == 1 || grid[i][j] == 3) {
            if (j + 1 < n) {
                right = solve(grid, i, j + 1, dp);
            }
        }

        if (grid[i][j] == 2 || grid[i][j] == 3) {
            if (i + 1 < n) {
                down = solve(grid, i + 1, j, dp);
            }
        }

        int ways = (right.first + down.first) % MOD;

        if (ways == 0) {
            return dp[i][j] = {0, 0};
        }

        int best = max(right.second, down.second);

        int adventure = grid[i][j] + best;

        return dp[i][j] = {ways, adventure};
    }

    vector<int> findWays(vector<vector<int>>& grid) {

        int n = grid.size();

        vector<vector<pair<int, int>>> dp(
            n, vector<pair<int, int>>(n, {-1, -1})
        );

        pair<int, int> ans = solve(grid, 0, 0, dp);

        return {ans.first, ans.second};
    }
};