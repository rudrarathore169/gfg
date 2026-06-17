class Solution {
public:
    static const long long MOD = 1000000007;

    long long lucas(int n) {
        if (n == 0) return 2;
        if (n == 1) return 1;

        long long a = 2, b = 1;

        for (int i = 2; i <= n; i++) {
            long long c = (a + b) % MOD;
            a = b;
            b = c;
        }

        return b;
    }
};