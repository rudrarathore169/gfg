class Solution {
  public:
    vector<vector<int>> levelSort(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
        int k=1;
        int i=0;
        while(i<arr.size()){
            vector<int>temp;
            int j =i;
            for(;i<j+k&&i<arr.size();i++){
                temp.push_back(arr[i]);
            }
            sort(temp.begin(),temp.end());
            ans.push_back(temp);
            k*=2;
        }
        return ans;
    }
};
