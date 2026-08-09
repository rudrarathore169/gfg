class Solution {
  public:
    int solve(vector<vector<int>>& mat,vector<vector<int>>&dp,int row,int col){
        if(dp[row][col]!=-1){
            return dp[row][col];
        }        
        int ans=-1;
        for(int i=0;i<mat.size();i++){
            if(i!=col){
                ans = max(ans,solve(mat,dp,row+1,i));
            }
        }
         dp[row][col]=mat[row][col]+ans;
        return dp[row][col];
    }
    int zigzagSequence(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int ch = mat[0][0];
        int j=0;
        for(int i=0;i<n;i++){
            dp[n-1][i]=mat[n-1][i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans = max(ans,solve(mat,dp,0,i));
        }
        
        return ans;
    }
};