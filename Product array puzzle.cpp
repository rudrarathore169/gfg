class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n = arr.size();
    vector<int> res(n, 1);

    // Calculate prefix products and store in res
    int prefix = 1;
    for (int i = 0; i < n; ++i) {
        res[i] = prefix;
        prefix *= arr[i];
    }

    // Calculate suffix products on-the-fly and update res
    int suffix = 1;
    for (int i = n - 1; i >= 0; --i) {
        res[i] *= suffix;
        suffix *= arr[i];
    }

    return res;
    }
};