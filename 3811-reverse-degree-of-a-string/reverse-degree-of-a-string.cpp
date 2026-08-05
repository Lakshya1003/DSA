class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        int j = 1;
        for (char i : s) {
            int a = i - 'a';
            a = abs(25 - a);
            a++;
            a *= j++;
            ans += a;
        }
        return ans;
    }
};