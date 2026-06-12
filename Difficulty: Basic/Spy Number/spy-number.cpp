class Solution {
  public:
    bool checkSpy(int n) {
        // code here
        int sum =0;
        int prod =1;
        while(n){
            int x = n%10;
            sum+=x;
            prod*=x;
            n/=10;
        }
        if(sum==prod){
            return true;
        }
        return false;
    }
};
