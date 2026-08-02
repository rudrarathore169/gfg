class Solution {
  public:
    int solve(int curr,vector<vector<int>>&adjp,int k,int n,vector<vector<int>>&dp){
        if(k==n){
            return 1;
        }
        if(dp[k][curr]!=-1){
            return dp[k][curr];
        }
        int currans=0;
        for(auto a:adjp[curr]){
            currans+=solve(a,adjp,k+1,n,dp);
        }
        dp[k][curr]=currans;
        return dp[k][curr];
    }
    int count(int n, int m) {
        // code here
        vector<vector<int>>adjp(m+1);
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=m;j++){
                if(i%j==0||j%i==0){
                    adjp[i].push_back(j);
                }
            }
        }
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        int count=0;
        for (int i = 1; i <= m; i++)
        count += solve(i, adjp, 1, n, dp);
        return count;
    }
};