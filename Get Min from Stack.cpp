class Solution {
    public:
    stack<int>st;
    unordered_map<int,int>mp;
    int mini=INT_MAX;
      Solution() {
          
      }
  
      void push(int x) {
          // code here
          mini=min(mini,x);
          st.push(x);
          mp[x]++;
          
      }
  
      void pop() {
          // code here
         if(st.empty())return ;
         mp[st.top()]--;
         if(mp[st.top()]==0)mp.erase(st.top());
         if(mini=st.top())
         {
             mini=INT_MAX;
             for(auto &i:mp)
             mini=min(mini,i.first);
         }
         st.pop();
      }
  
      // Returns top element of the Stack
      int peek() {
          if(st.empty())
          return -1;
          return st.top();
          // code here
      }
  
      // Finds minimum element of Stack
      int getMin() {
          // code here
          if(st.empty())
          return -1;
          return mini;
          
      }
  };