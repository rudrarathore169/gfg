class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int first=-1;
        int second =-1;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]>second&&arr[i]!=first){
                if(arr[i]>first){
                    second = first;
                    first = arr[i];
                }
                else{
                    second = arr[i];
                }
            }
        }
        return second;
    }
};