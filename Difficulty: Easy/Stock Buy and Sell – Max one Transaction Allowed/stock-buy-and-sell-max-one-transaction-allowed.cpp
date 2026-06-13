class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        vector<int>maxim;
        vector<int>minim;
        int maxi=INT_MIN;
        int mini= INT_MAX;
        
        
        for(int i=0;i<prices.size();i++){
         mini = min(mini,prices[i]);
         minim.push_back(mini);
        }
        
        for(int i=prices.size()-1;i>=0;i--){
            maxi = max(maxi,prices[i]);
            maxim.push_back(maxi);
        }
        
        reverse(maxim.begin(),maxim.end());
        int ans = INT_MIN;
        for(int i=0;i<prices.size();i++){
            ans = max(ans,maxim[i]-minim[i]);
        }
        return ans;
        
    }
};