class Solution {
public:
    vector<bool> processQueries(vector<int> &arr, vector<vector<int>> &queries) {

        int n = arr.size();
        vector<int> inc(n);
        inc[n - 1] = n - 1;
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] <= arr[i + 1])
                inc[i] = inc[i + 1];
            else
                inc[i] = i;
        }
        vector<int> dec(n);
        dec[0] = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] <= arr[i - 1])
                dec[i] = dec[i - 1];
            else
                dec[i] = i;
        }
        vector<bool> ans;
        for (auto &q : queries) {
            int L = q[0];
            int R = q[1];

            ans.push_back(dec[R] <= inc[L]);
        }
        return ans;
    }
};