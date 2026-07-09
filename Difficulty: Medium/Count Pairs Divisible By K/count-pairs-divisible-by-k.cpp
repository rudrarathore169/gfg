class Solution {
public:
    int countKdivPairs(vector<int>& arr, int k) {
        unordered_map<int,int> freq;
        int cnt = 0;

        for (int x : arr) {
            int rem = x % k;
            int need = (k - rem) % k;

            cnt += freq[need];     

            freq[rem]++;
        }

        return cnt;
    }
};