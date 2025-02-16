class Solution{
    public:	
            int maxi(vector<int> arr,int n){
            int maix=-1;
            int ans ;
            for(int i=0;i<n;i++){
                if(arr[i]>maix){
                    maix=arr[i];
                    ans =i;
                }
            }
            return maix;
        }
       
        int getSecondLargest(vector<int> arr) {
            int n = arr.size();
            int z = maxi(arr,n);
            for(int i=0;i<n;i++){
                if(arr[i]==z){
                    arr[i]=0;
                }
            }
            if(maxi(arr,n)==0){
                return -1;
            }
            
            return  maxi(arr,n);
             
            
           
            
        }
    };