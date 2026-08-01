class Solution {
  public:
    int findMax(int n, vector<int>& a, vector<int>& b, vector<int>& k) {
        // code here
        vector<int>ans(n+1,0);
        
        for(int i=0;i<a.size();i++){
            int ai = a[i];
            int bi = b[i];
            int ki = k[i];
            
           ans[ai] += k[i];
            if (bi + 1 < n)
            ans[bi + 1] -= k[i];
        }
        int maxi=0;
        int cans=0;
        for(int i=0;i<ans.size();i++){
            cans+=ans[i];
            ans[i]=cans;
            maxi = max(maxi,cans);
        }
        return maxi;
    }
};