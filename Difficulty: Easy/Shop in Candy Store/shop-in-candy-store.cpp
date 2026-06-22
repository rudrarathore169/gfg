class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
            sort(prices.begin(),prices.end());
            int i=0;
            int e = prices.size()-1;
            int mini = 0;
            while(i<=e){
                mini+=prices[i++];
                e-=k;
            }
            
            int maxi=0;
            i=0;
            e=prices.size()-1;
            while(i<=e){
                maxi+=prices[e--];
                i+=k;
            }
            return {mini,maxi};
    }
};