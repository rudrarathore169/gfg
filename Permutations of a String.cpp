class Solution {
  public:
   
       vector<string> findPermutation(string &s) {
        vector<string> ans;
        
        string str = s;
        
        sort(str.begin(),str.end());
        
        do{
            ans.push_back(str);
        } while(next_permutation(str.begin(),str.end()));
        return ans;
    }
};
