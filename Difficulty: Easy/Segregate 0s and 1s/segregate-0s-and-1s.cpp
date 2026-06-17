class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int i=0;
        int j = arr.size()-1;
        for(;i<arr.size();i++){
            if(arr[i]==1){
                break;
            }
        }
        for(;j>=0;j--){
            if(arr[j]==0){
                break;
            }
        }
        while(i<j){
            if(arr[i]==1&&arr[j]==0){
                swap(arr[i++],arr[j--]);
            }
            while(arr[i]!=1&&i<j){
                i++;
            }
            while(arr[j]!=0&&i<j){
                j--;
            }
        }
        
        
    }
};