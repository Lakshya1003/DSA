class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.length();

        int ones = 0;
        int mx = 0;
        int pre = INT_MIN;

        for (int i = 0; i < n; ) {
            int j = i;

            while (j < n && s[j] == s[i])
                j++;

            int len = j - i;

            if (s[i] == '1') {
                ones += len;
            } else {
                mx = max(mx, pre + len);
                pre = len;
            }

            i = j;
        }

        return ones + mx;
    }
};