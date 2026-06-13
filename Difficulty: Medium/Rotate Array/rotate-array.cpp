class Solution {
  public:
  
    void reverse(vector<int> &arr,int s , int e) {
        
        while(s<e){
            swap(arr[s++],arr[e--]);
        }
    }
    
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int e = arr.size()-1;
        reverse(arr,0,arr.size()-1);
        d= d%arr.size();
        int k = arr.size()-d-1;
        reverse(arr,k+1,e);
        reverse(arr,0,k);
        
    }
};