class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
        if(arr.size()<2){
            return;
        }
        
        for(int i=1;i<arr.size();i+=2){
            if(arr[i]>arr[i-1]){
                swap(arr[i],arr[i-1]);
            }
        }
    }
};