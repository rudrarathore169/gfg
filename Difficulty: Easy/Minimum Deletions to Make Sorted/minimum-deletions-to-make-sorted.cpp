class Solution {
public:
    int minDeletions(vector<int>& arr) {
        vector<int> lis;

        for (int x : arr) {
            auto it = lower_bound(lis.begin(), lis.end(), x);

            if (it == lis.end())
                lis.push_back(x);
            else
                *it = x;
        }

        return arr.size() - lis.size();
    }
};
// class Solution {
//   public:
//     int minDeletions(vector<int>& arr) {
//         code here
//         int lans=0;
//         int rans=0;
//         int curr = arr[0];
//         for(int i=1;i<arr.size();i++){
//             if(arr[i]>curr){
//                 curr = arr[i];
//             }
//             else{
//                 lans++;
//             }
//         }
//         curr = arr[arr.size()-1];
//         for(int i=arr.size()-2;i>=0;i--){
//             if(arr[i]<curr){
//                 curr = arr[i];
//             }
//             else{
//                 rans++;
//             }
//         }
//         return min(lans,rans);
        
        
        
//     }
// };