class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // code here
        int first=-1;
        int second =-1;
        int third = -1;
        for(int i=0;i<arr.size();i++){
            if(third<arr[i]){
                if(second<arr[i]){
                    if(first<arr[i]){
                        third = second;
                        second  = first;
                        first  = arr[i];
                    }
                    else{
                        third = second;
                        second = arr[i];
                    }
                }
                else{
                    third = arr[i];
                }
            }
            
        }
        
    
        return third;
    }
};

