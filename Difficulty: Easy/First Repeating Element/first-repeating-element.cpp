class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
        int ans = -1;
        unordered_map<int,bool> visited;
        for(int i=arr.size()-1;i>=0;i--){
            if(visited[arr[i]]==true){
                ans=i+1;
            }
            else{
                visited[arr[i]]=true;
            }
        }
        return ans;
    }
};