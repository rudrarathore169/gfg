class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0){
                pos.push_back(arr[i]);
            }
            else{
                neg.push_back(arr[i]);
            }
        }
        arr={};
        int i=0;
        int j=0;
        while(i<pos.size()&&j<neg.size()){
            arr.push_back(pos[i++]);
            arr.push_back(neg[j++]);
        }
        while(i<pos.size()){
            arr.push_back(pos[i++]);
        }
        while(j<neg.size()){
            arr.push_back(neg[j++]);
        }
        
       
    }
};