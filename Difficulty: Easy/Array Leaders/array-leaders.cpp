

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        vector<int>ans;
        
        int maxm = arr[arr.size()-1];
        for(int i = arr.size()-1;i>=0;i--){
            if(maxm<=arr[i]){
                ans.push_back(arr[i]);
                maxm = arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};