class Solution {
  public:
    int solve(vector<int>&coins, int sum, vector<int>&dp){
        if(sum==0){
            return 0;
        }
        else if(sum<0){
            return INT_MAX;
        }
        else if(dp[sum]!=-1){
           return dp[sum];
        }
        int mini = INT_MAX;
        for(int i=0;i<coins.size();i++){
            int ans = solve(coins,sum-coins[i],dp);
            if(ans!=INT_MAX){
                mini = min(mini,ans+1);
            }
        }
        dp[sum]=mini;
        return mini;
    }
    int minCoins(vector<int> &coins, int sum) {
        // code here
        vector<int>dp(sum+1,-1);
        int ans = solve(coins,sum,dp);
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};