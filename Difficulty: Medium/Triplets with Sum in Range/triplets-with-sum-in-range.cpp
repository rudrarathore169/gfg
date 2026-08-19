class Solution {
public:
    long long countAtMost(vector<int>& arr, int x) {
        int n = arr.size();
        long long count = 0;
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                long long sum = 1LL * arr[i] + arr[left] + arr[right];
                if (sum <= x) {
                    count += right - left;
                    left++;
                } else {
                    right--;
                }
            }
        }
        return count;
    }
    long long countTriplets(vector<int>& arr, int l, int r) {
        sort(arr.begin(), arr.end());
        return countAtMost(arr, r) - countAtMost(arr, l - 1);
    }
};