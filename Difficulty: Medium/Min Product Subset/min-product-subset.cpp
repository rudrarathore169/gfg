class Solution {
  public:
    int minProd(vector<int>& arr) {
        // code here
        int negmul=1;
        int posmul=1;
        int negb=INT_MIN;
        int poss=INT_MAX;
        bool flag=false;
        bool nflag=false;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0){
                negb = max(negb,arr[i]);
                negmul*=arr[i];
                nflag=true;
            }
            else if(arr[i]>0){
                poss = min(poss,arr[i]);
                posmul *= arr[i]; 
            }
            else{
                flag=true;
            }
        }
        
        if(nflag&&negmul<0){
            return negmul*posmul;
        }
        else if(nflag&&negmul>0){
            return (negmul/negb)*posmul;
        }
        
        if(flag){
            return 0;
        }
        
        return poss;
    }
};