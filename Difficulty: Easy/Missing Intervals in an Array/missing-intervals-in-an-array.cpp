class Solution {
  public:
    vector<vector<int>> missingRanges(vector<int> &arr, int lower, int upper) {
        // Code here
        vector<vector<int>>ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>lower){
                ans.push_back({lower,arr[i]-1});
                lower = arr[i]+1;
            }
            
                lower = arr[i]+1;
            
        }
        if(upper>=lower){
            ans.push_back({lower,upper});
        }
        return ans;
        
    }
};
