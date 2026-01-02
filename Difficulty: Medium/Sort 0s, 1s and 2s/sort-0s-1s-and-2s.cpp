class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        
        int arr1[3] = {0,0,0};
        for(int i=0;i<arr.size();i++){
            arr1[arr[i]]++;
        }
        int j=0;
        
        for(int i=0;i<arr1[0];i++){
            arr[j++]=0;
        }
        for(int i=0;i<arr1[1];i++){
            arr[j++]=1;
        }
        for(int i=0;i<arr1[2];i++){
            arr[j++]=2;
        }
    }
};