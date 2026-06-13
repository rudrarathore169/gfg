class Solution {
  public:
    int maxProduct(vector<int> arr) {
         int firstmax=INT_MIN;
        int secondmax =INT_MIN;
        int thirdmax = INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(thirdmax<arr[i]){
                if(secondmax<arr[i]){
                    if(firstmax<arr[i]){
                        thirdmax = secondmax;
                        secondmax  = firstmax;
                        firstmax  = arr[i];
                    }
                    else{
                        thirdmax = secondmax;
                        secondmax= arr[i];
                    }
                }
                else{
                    thirdmax = arr[i];
                }
            }
            
        }
        
        int firstmin=INT_MAX;
        int secondmin =INT_MAX;
        int thirdmin= INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(thirdmin>arr[i]){
                if(secondmin>arr[i]){
                    if(firstmin>arr[i]){
                        thirdmin = secondmin;
                        secondmin = firstmin;
                        firstmin = arr[i];
                    }
                    else{
                        thirdmin= secondmin;
                        secondmin= arr[i];
                    }
                }
                else{
                    thirdmin= arr[i];
                }
            }
            
        }
        
        
        return max(firstmin*secondmin*firstmax,firstmax*secondmax*thirdmax);
        
        
        
    
        
        
    }
};