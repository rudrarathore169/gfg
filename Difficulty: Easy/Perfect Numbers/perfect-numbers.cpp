class Solution {
  public:
    bool isPerfect(int n) {
        // code here
        int ans=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                ans+=i;
                if(i!=1)ans+=n/i;
            }
            
        }
        
        if(ans==n){
            return true;
        }
        return false;
    }
};