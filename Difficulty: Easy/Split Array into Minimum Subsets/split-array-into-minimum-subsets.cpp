class Solution {
  public:
    int minSubsets(vector<int>& arr) {
        // code here
        if(arr.size()==0){
            return 0;
        }
        
        sort(arr.begin(),arr.end());
        
        int ans=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-1!=arr[i-1]){
                ans++;
            }
        }
        return ans;
        
        
    }
};
