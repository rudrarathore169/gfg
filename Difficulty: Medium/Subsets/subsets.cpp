class Solution {
  public:
    void solve(int i, vector<int>&arr, vector<int>&curr,vector<vector<int>>&ans){
        if(i==arr.size()){
            ans.push_back(curr);
            return;
        }
        
        curr.push_back(arr[i]);
        solve(i+1,arr,curr,ans);
        curr.pop_back();
         solve(i+1,arr,curr,ans);
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        vector<int>curr;
        vector<vector<int>>ans;
        solve(0,arr,curr,ans);
        return ans;
    }
};