class Solution {
  public:
    int findIndex(string &s) {
        // code here
        int opened = 0;
        int closed =0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                opened++;
            }
            else{
                closed++;
            }
        }
        if(opened==0){
            return s.size();
        }
        
        int opc=0;
        int csc=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                opc++;
            }
            else{
                csc++;
            }
            
            if(opc==closed-csc){
                return i+1;
            }
        }
        return 0;
    }
};