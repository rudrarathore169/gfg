class Solution {
  public:
    int solve(vector<int>& h, vector<int>& l,
              vector<vector<int>>& dp, int day, int prevTask) {

        if (day == h.size())
            return 0;

        if (dp[day][prevTask] != -1)
            return dp[day][prevTask];
        int ans = solve(h, l, dp, day + 1, 0);
        ans = max(ans,l[day] + solve(h, l, dp, day + 1, 1));
        if (prevTask == 0) {
            ans = max(ans,
                      h[day] + solve(h, l, dp, day + 1, 1));
        }

        return dp[day][prevTask] = ans;
    }

    int maxTask(vector<int>& h, vector<int>& l) {
        // code here
        int n = h.size();

        vector<vector<int>> dp(n, vector<int>(2, -1));

        return solve(h, l, dp, 0, 0);
    }
};