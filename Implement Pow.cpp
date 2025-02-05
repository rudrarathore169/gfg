class Solution {
  public:
    double power(double b, int e) {
       if(e<0){
            return 1/power(b,-e);
        }
        if(e==0){
            if(b<0 || b>0){
                return 1.0;
            }
            else if(b==0){
                return 0.0;
            }
        }
        
        double ans = power(b, e/2);
        
        if(e%2==0){
            return ans*ans;
        }
        else {
            return b*ans*ans;
        }
    }
};