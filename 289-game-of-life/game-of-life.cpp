class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();

        int x[8] = {-1,-1,-1,0,0,1,1,1};
        int y[8] = {-1,0,1,-1,1,-1,0,1};

        vector<pair<int,int>> v;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int oc = 0;

                for(int k = 0; k < 8; k++){
                    int x1 = i + x[k];
                    int y1 = j + y[k];

                    if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < m){
                        if(board[x1][y1] == 1)
                            oc++;
                    }
                }

                if(board[i][j] == 1){
                    if(oc < 2 || oc > 3)
                        v.push_back({i, j});
                }
                else{
                    if(oc == 3)
                        v.push_back({i, j});
                }
            }
        }

        for(auto &p : v){
            int x = p.first;
            int y = p.second;
            board[x][y] = (board[x][y] == 1) ? 0 : 1;
        }
    }
};