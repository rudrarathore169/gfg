class Solution {
  public:
    vector<int> addOne(vector<int>& arr) {
        // code here
        int num = 0;
        int carry =1;
        for(int i=arr.size()-1;i>=0;i--){
            arr[i]+=carry;
            if(arr[i]>9){
            arr[i]=arr[i]%10;
            }
            else{
                carry=0;
                return arr;
            }
            
        }
        if(carry==1){
            reverse(arr.begin(),arr.end());
            arr.push_back(1);
            reverse(arr.begin(),arr.end());
        }
        return arr;

        
    }
};