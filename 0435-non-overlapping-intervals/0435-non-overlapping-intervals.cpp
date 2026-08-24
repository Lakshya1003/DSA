class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& in) {
        sort(in.begin(), in.end());

        int ans = 0;
        int e1 = in[0][1];

        for (int i = 1; i < in.size(); i++) {
            int s2 = in[i][0];
            int e2 = in[i][1];

            if (s2 < e1) {
                ans++;
                // Keep the interval with the earlier ending time
                e1 = min(e1, e2);
            } else {
                e1 = e2;
            }
        }

        return ans;
    }
};