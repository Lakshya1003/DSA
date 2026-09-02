class Solution {
public:
    void dfs(int i, int j, int n, int m, vector<vector<char>>& b,
             string w, int t, bool& ans) {

        if (t == w.size()) {
            ans = true;
            return;
        }

        vector<int> x = {-1, 1, 0, 0};
        vector<int> y = {0, 0, -1, 1};

        // Mark current cell as visited
        char temp = b[i][j];
        b[i][j] = '#';

        for (int k = 0; k < 4; k++) {
            int xc = i + x[k];
            int yc = j + y[k];

            if (xc >= 0 && xc < n && yc >= 0 && yc < m) {
                if (b[xc][yc] == w[t]) {
                    dfs(xc, yc, n, m, b, w, t + 1, ans);

                    if (ans)
                        return;
                }
            }
        }

        // Backtrack
        b[i][j] = temp;
    }

    bool exist(vector<vector<char>>& b, string w) {
        int n = b.size();
        int m = b[0].size();

        bool ans = false;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (b[i][j] == w[0]) {
                    dfs(i, j, n, m, b, w, 1, ans);

                    if (ans)
                        return true;
                }
            }
        }

        return false;
    }
};