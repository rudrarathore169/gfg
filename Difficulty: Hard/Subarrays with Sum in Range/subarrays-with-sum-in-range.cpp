class Solution {
  public:
    long long solve(vector<int>&arr,int k){
        if(k<0){
            return 0;
        }
        int l=0;
        long long ans=0;
        int cnt=0;
        for(int r=0;r<arr.size();r++){
            ans+=arr[r];
            while(ans>k){
                ans-=arr[l];
                l++;
            }
            cnt += r-l+1;
        }
        return cnt;
    }
    int countSubarray(vector<int>& arr, int l, int r) {
        // code here
        return solve(arr,r)-solve(arr,l-1);
        
    }
};