class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_map<int,bool>have;
       for(int i=0;i<arr.size();i++){
           if(have[target-arr[i]]==true){
               return true;
           }
           else{
               have[arr[i]]=true;
           }
       }
       return false;
        
    }
};