class Solution {
  public:
  
    void reverse(vector<int> &arr,int s , int e) {
        // code here
       
        while(s<e){
            swap(arr[s++],arr[e--]);
        }
    }
    
    void reverseInGroups(vector<int> &arr, int k) {
        // code here
        int s=0;
        int e = arr.size()-1;
        
        while(e-s>k-1){
            reverse(arr,s,s+k-1);
            s=s+k;
        }
        reverse(arr,s,e);
       
    }
};
