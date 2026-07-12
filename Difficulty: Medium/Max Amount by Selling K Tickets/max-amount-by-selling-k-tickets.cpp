class Solution {
public:
    int maxAmount(vector<int>& arr, int k) {
        priority_queue<int> pq;

        for (int x : arr)
            pq.push(x);

        const int MOD = 1e9 + 7;
        long long ans = 0;

        while (k-- && !pq.empty()) {
            int x = pq.top();
            pq.pop();

            ans = (ans + x) % MOD;

            if (x > 1)
                pq.push(x - 1);
        }

        return ans;
    }
};