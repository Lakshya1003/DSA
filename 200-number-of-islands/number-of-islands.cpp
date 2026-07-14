class Solution {
public:
    bool valid(int i, int j, int n, int m) {
        return (i >= 0 && i < n && j >= 0 && j < m);
    }
    void dfs(vector<vector<char>>& grid , int n , int m , int i , int j , vector<vector<bool>>& vis){
        vis[i][j] = 1;
        vector<int> x= {-1,1,0,0};
        vector<int> y= {0,0,-1,1};
        for(int k = 0 ; k < 4 ; k++){
            int row = i + x[k];
            int col = j + y[k];
            if(valid(row , col , n , m) && grid[row][col] == '1' && vis[row][col] == 0)
            dfs(grid,n,m,row,col,vis);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n);
        int i , j;
        for(i = 0 ; i < n ; i++){
            vector<bool> t(m,0);
            vis[i] = t;
        }
        int ans = 0;
        for(i = 0 ; i < n ; i++){
            for(j = 0 ; j < m ; j++){
                if(grid[i][j] == '1' && vis[i][j] == 0){
                    dfs(grid,n,m,i,j,vis);
                    ans++;
                }
            }
        }
        return ans;
    }
};