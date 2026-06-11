class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int k=n;
        
        int ans=0;
        while(n){
            int dig=n%10;
            if(dig!=0&&k%(dig)==0)ans++;
            
            n/=10;
        }
        return ans;
        
    }
};