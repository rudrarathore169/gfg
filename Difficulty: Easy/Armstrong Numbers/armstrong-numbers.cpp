// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int k=n;
     int ans= 0;
     while(n){
         ans+=pow(n%10,3);
         n/=10;
     }
     if(ans==k){
         return true;
     }
     return false;
    }
};