class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
       int  low=0,high=k-1;
        int sum=0,res=INT_MIN;
        for(int i=low;i<=high;i++){
            sum=sum+arr[i];
        }
        while(high<n){
             res=max(res,sum);
            low++,high++;
            if(high==n){
                break;
         }
         sum=sum-arr[low-1];
         sum=sum+arr[high];
        }
        return res;
    }
};