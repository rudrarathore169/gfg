class Solution {
  public:
    bool canRepresentBST(vector<int>& preorder) {
        stack<int> st;
        int root = INT_MIN;
    
        for (int val : preorder) {
    
            if (val < root)
                return false;
    
            while (!st.empty() && val > st.top()) {
                root = st.top();
                st.pop();
            }
    
            st.push(val);
        }
    
        return true;
    }
};