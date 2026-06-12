class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        // code here
         vector<int>xc;
         vector<int>yc;
         int ans=  INT_MAX;
         for(int i=0;i<arr.size();i++){
             if(arr[i]==x){
                 xc.push_back(i);
             }
             else if(arr[i]==y){
                 yc.push_back(i);
             }
         }
         if(!(xc.size()&&yc.size())){
             return -1;
         }
         
         for(int i=0;i<xc.size();i++){
             for(int j=0;j<yc.size();j++){
                 ans = min(ans,abs(yc[j]-xc[i]));
             }
         }
         return ans;
    }
};