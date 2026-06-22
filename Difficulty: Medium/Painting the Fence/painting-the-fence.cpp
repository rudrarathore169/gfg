class Solution {
  public:
    int solve(int n, int k){
        if (n == 1) return k;
        if (n == 2) return k + k * (k - 1);

         
         
        int prev2 = k;
        int prev1  =k+k*(k-1);
        
        for(int i=3;i<=n;i++){
        int ans=prev2*(k-1)+prev1*(k-1);
        prev2 = prev1;
        prev1 = ans;
        }
        
        
        return prev1;
    }
    int countWays(int n, int k) {
        // code here
        
        return solve(n,k);
    }
};