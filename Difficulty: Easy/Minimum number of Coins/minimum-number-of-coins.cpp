class Solution {
  public:
    int findMin(int n) {
        // code here
      int count=0;
        while(10<=n){
            n-=10;
            count++;
        }
        
        while(5<=n){
            n-=5;
            count++;
        }
        
        while(2<=n){
            n-=2;
            count++;
        }
        
        while(1<=n){
            n-=1;
            count++;
        }
        return count;
    }
};