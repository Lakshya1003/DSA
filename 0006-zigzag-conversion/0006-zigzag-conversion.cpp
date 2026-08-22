class Solution {
public:
    string convert(string s, int nr) {
        if (nr == 1) return s;

        int n = s.length();

        
        vector<vector<char>> m(nr, vector<char>(n, '-'));

        bool rm = false; 
        int r = 0;
        int c = 0;

        for (int i = 0; i < n; i++) {
            m[r][c] = s[i];

            if (!rm) {
                r++;

                if (r == nr) {
                    rm = true;
                    r = nr - 2;
                    c++;
                }
            }
            else {
                r--;
                c++;

                if (r < 0) {
                    rm = false;
                    r = 1;
                    c--;
                }
            }
        }

        string ans = "";

        for (auto &i : m) {
            for (char j : i) {
                if (j != '-') {
                    ans += j;
                }
            }
        }

        return ans;
    }
};