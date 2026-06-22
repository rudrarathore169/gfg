class Solution {
  public:
 bool solve(int i, vector<int>& arr, int sum,vector<vector<int>>&dp){
     if(sum==0)
            return true;

        if(i == arr.size())
            return false;
            
        if(dp[i][sum] != -1)
            return dp[i][sum];


        bool take = false;

        if(arr[i] <= sum)
        {
            take = solve(i + 1, arr, sum - arr[i], dp);
        }

        bool notTake = solve(i + 1, arr, sum, dp);

        return dp[i][sum] = take || notTake;
 }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        
        vector<vector<int>>dp(arr.size()+1,vector<int>(sum+1,-1));
        return solve(0,arr,sum,dp);
 
        
    }
};