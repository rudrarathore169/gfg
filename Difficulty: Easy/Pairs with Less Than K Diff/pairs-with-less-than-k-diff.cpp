class Solution {
public:
    int countPairs(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());

        int n = arr.size();
        int ans = 0;
        int left = 0;

        for (int right = 1; right < n; right++) {
            while (arr[right] - arr[left] >= k) {
                left++;
            }
            ans += (right - left);
        }

        return ans;
    }
};