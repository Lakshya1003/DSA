class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0;
        int ans = 0;

        for (char c : s) {
            if (c == 'R')
                balance++;
            else
                balance--;

            if (balance == 0)
                ans++;
        }

        return ans;
    }
};