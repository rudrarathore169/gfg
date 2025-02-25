class Solution {
    public:
      // Function to find the next greater element for each element of the array.
      vector<int> nextLargerElement(vector<int>& arr) {
          stack<long long>s;
          int n = arr.size();
          s.push(-1);
          vector<int>ans(n);
          for(int i=arr.size()-1;i>=0;i--){
              while(s.top()<=arr[i]&& s.top()!=-1){
                  s.pop();
              }
              ans[i]=s.top();
              s.push(arr[i]);
          }
          return ans;
      }
  };