class Solution {
public:
    bool isPossible(vector<int>& arr, int s, int x) {
        vector<long long> chans(arr.size() + 1, 0);
        chans[0] = s;

        long long sum = s;

        for (int i = 0; i < arr.size(); i++) {
            chans[i + 1] = sum + arr[i];
            sum += chans[i + 1];
        }

        // finding sum
        for (int i = chans.size() - 1; i >= 0; i--) {
            if (chans[i] <= x) {
                x -= chans[i];
            }
        }

        return x == 0;
    }
};