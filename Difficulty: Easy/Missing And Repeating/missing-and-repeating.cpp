class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int missing = -1;
        int repeating =-1;
        
        for(int i=0;i<arr.size();i++){
            int x = abs(arr[i]);
            
            if(arr[x-1]<0){
                repeating = x;
              
            }
            else{
                arr[x-1]=-arr[x-1];
            }
        }
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]>0){
                missing = i+1;
            }
        }
        return {repeating,missing};
        
    }
};