class Solution {
    public:
      int dp[1001][1001];
      int solve(int i, int j, string &s){
          if (i > j) return 0;
          if (i == j) return 1;
          if (dp[i][j] != -1) return dp[i][j];
          int op1 = 0, op2 = 0, op3 = 0;
          if (s[i] == s[j]){
              op1 = 2 + solve(i+1, j-1, s);
          }
          else{
              op2 = solve(i+1, j, s);
              op3 = solve(i, j-1, s);
          }
          
          dp[i][j] = max({op1,op2,op3});
          return dp[i][j];
      }
      int longestPalinSubseq(string &s) {
          memset(dp, -1 , sizeof(dp));
          return solve(0, s.length(), s);
      }
  };