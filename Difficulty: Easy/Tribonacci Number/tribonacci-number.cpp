
class Solution {
  public:
  
    int solve(vector<int>&dp,int n){
        if(n==0||n==1){
            return n;
        }
        else if(n==2){
            return 1;
        }
        if(dp[n]==-1){
            dp[n] = solve(dp,n-1)+solve(dp,n-2)+solve(dp,n-3);
        }
        return dp[n];
    }
    int nthTribonacci(int n) {
        // code here
        vector<int>dp(n+1,-1);
        
        return solve(dp,n);
    }
};
