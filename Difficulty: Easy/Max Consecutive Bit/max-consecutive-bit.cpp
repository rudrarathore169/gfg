class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int ans=0;
        int curr=1;
        
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]!=arr[i+1]){
                ans= max(ans,curr);
                curr=1;
            }
            else{
                curr++;
            }
            
        }
        return max(ans,curr);
    }
};