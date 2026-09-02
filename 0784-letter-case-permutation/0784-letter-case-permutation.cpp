class Solution {
public:
    void fun(int i, int n, string s, vector<string>& ans) {
        if (i == n) {
            ans.push_back(s);
            return;
        }

        if (s[i] >= 'a' && s[i] <= 'z') {
            // Keep lowercase
            fun(i + 1, n, s, ans);

            // Change to uppercase
            s[i] = s[i] - 'a' + 'A';
            fun(i + 1, n, s, ans);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            // Keep uppercase
            fun(i + 1, n, s, ans);

            // Change to lowercase
            s[i] = s[i] - 'A' + 'a';
            fun(i + 1, n, s, ans);
        }
        else {
            // Digit
            fun(i + 1, n, s, ans);
        }
    }

    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        fun(0, s.size(), s, ans);
        return ans;
    }
};