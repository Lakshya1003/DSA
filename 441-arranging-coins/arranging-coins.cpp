class Solution {
public:
    int arrangeCoins(int n) {
        if (n < 3) return 1;

        int x = 0;

        for (long long i = 1; i <= n; i++) {
            long long sum = i * (i + 1);

            if (sum == 2LL * n) {
                x = i;
                break;
            }
            else if (sum > 2LL * n) {
                x = i - 1;
                break;
            }
        }

        return x;
    }
};