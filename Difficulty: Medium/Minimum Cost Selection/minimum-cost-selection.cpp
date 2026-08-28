class Solution {
  public:
    int minCost(vector<vector<int>>& mat) {
         int n = mat.size();
         vector<int> prev(4, 0);

         for (int i = n-1; i >= 0; i--){
             vector<int> curr(4, 0);
             for (int k = 0; k < 4; k++){
                 int ans = INT_MAX;
                 for (int j = 0; j < 3; j++){
                     if (j == k) continue;
                     ans = min(ans, mat[i][j] + prev[j]);
                 }
                 curr[k] = ans;
             }
             prev = curr;
         }

         return prev[3];
     }
    
};