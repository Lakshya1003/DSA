class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        int n = b.size();
        int m = b[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (b[i][j] != '.') {
                    char c = b[i][j];

                    // Row and column check
                    for (int k = 0; k < n; k++) {
                        int up = i - (1 + k);
                        int down = i + (1 + k);
                        int left = j - (1 + k);
                        int right = j + (1 + k);

                        if (up >= 0 && b[up][j] == c)
                            return false;

                        if (down < n && b[down][j] == c)
                            return false;

                        if (left >= 0 && b[i][left] == c)
                            return false;

                        if (right < m && b[i][right] == c)
                            return false;
                    }

                    int sr = (i / 3) * 3;
                    int sc = (j / 3) * 3;

                    for (int r = sr; r < sr + 3; r++) {
                        for (int col = sc; col < sc + 3; col++) {
                            if ((r != i || col != j) && b[r][col] == c)
                                return false;
                        }
                    }
                }
            }
        }

        return true;
    }
};