class Solution {
  public:
    int search(vector<int>& arr, int k) {
        // Code Here
        int s =0;
        int e=arr.size()-1;
        
        while(s<=e){
            int mid = s+(e-s)/2;
            if(arr[mid]==k){
                return mid;
            }
            if(arr[mid]<=arr[e]){
                if(arr[mid]<k&&k<=arr[e]){
                    s = mid+1;;
                }
                else{
                    e  = mid-1;
                }
            }
            else{
                if(arr[s]<=k&&arr[mid]>k){
                    e = mid-1;
                }
                else{
                    s = mid+1;
                }
            }
        }
        return -1;
        
    }
};