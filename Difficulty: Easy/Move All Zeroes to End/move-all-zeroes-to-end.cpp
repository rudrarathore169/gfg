class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        vector<int>ans;
        int i=0;
        int count=0;
        for(;i<arr.size();i++){
            if(arr[i]!=0){
                ans.push_back(arr[i]);
            }
            else{
                count++;
            }
        }
        while(count--){
            ans.push_back(0);
        }
        
        arr=ans;
    }
};