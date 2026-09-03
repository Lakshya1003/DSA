class Solution {
public:
    long long fun(vector<int>& piles, int n, int speed) {
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            ans = ans +  piles[i] / speed;
            if (piles[i] % speed != 0) {
                ans++;
            }
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int g) {

        int l = 1;
        int h = *max_element(piles.begin(), piles.end());
        int ans = -1;
        int n = piles.size();
        while (l <= h) {
            int m = l + (h - l) / 2;
            long long pass = fun(piles, n, m);
            if (pass > g) {
                l = m + 1;
            } else {
                ans = m;
                h = m - 1;
            }
        }
        return ans;
    }
};