class Solution {
  public:
    int maxIndexDifference(string &s) {
        // code here
        vector<bool>alpha(26,false);
        int start=-1;
        int end =-1;
        int ans=0;
        bool flag=1;
        for(int i=0;i<s.length();i++){
            if(alpha[0]==false&&s[i]=='a'){
                alpha[0]= true;
                start = i;
                end = i;
                flag = 0;
            }
            else if(s[i]!='a'&&alpha[s[i]-'a'-1]==true){
                alpha[s[i]-'a']=true;
                end = i;
            }
            ans= max(ans,end-start);
        }
        if(flag){
            return -1;
        }
        return ans;
    }
};
