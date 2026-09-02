class Solution {
public:
    int candy(vector<int>& r) {
        int n = r.size();
        vector<int> c(n, 1);
        // look left move forward
        for (int i = 0; i < n; i++) {
            if (i > 0) {
                if (r[i - 1] < r[i])
                    c[i] = c[i-1] + 1;
            }
        }
        // look right move back
        for(int i = n - 2 ; i >= 0 ; i--){
            if (r[i] > r[i + 1]) {
                c[i] = max(c[i], c[i + 1] + 1);
            }
        }
        int ans = 0;
        for(int i : c) ans += i;
        return ans;
    }
};