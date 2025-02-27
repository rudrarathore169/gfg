class Solution {
    public:
        void leftindex(vector<int>& arr, vector<int>& left) {
            stack<int> st;
            int n = arr.size();
            left.resize(n, -1);
    
            for (int i = 0; i < n; i++) {
                while (!st.empty() && arr[st.top()] >= arr[i]) {
                    st.pop();
                }
                left[i] = st.empty() ? -1 : st.top();  
                st.push(i);
            }
        }
    
        void rightindex(vector<int>& arr, vector<int>& right) {
            stack<int> st;
            int n = arr.size();
            right.resize(n, n); 
    
            for (int i = n - 1; i >= 0; i--) {
                while (!st.empty() && arr[st.top()] >= arr[i]) {
                    st.pop();
                }
                right[i] = st.empty() ? n : st.top(); 
                st.push(i);
            }
        }
    
        int getMaxArea(vector<int>& arr) {
            int n = arr.size();
            vector<int> left(n), right(n);
            leftindex(arr, left);
            rightindex(arr, right);
    
            int maxArea = 0;
            for (int i = 0; i < n; i++) {
                int width = right[i] - left[i] - 1;
                int area = arr[i] * width;
                maxArea = max(maxArea, area);
            }
            return maxArea;
        }
    };