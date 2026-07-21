class Solution {
public:
    vector<vector<int>> dp = vector<vector<int>>(205, vector<int>(205, -1));
    int solve(vector<vector<int>>& grid, int i, int j) {
        int n = grid.size();
        int m = grid[0].size();

     
        if (i >= n || j >= m)
            return INT_MAX;

       
        if (i == n - 1 && j == m - 1)
            return grid[i][j];

        if(dp[i][j] > -1){
            return dp[i][j];
        }
        int down = solve(grid, i + 1, j);
        int right = solve(grid, i, j + 1);

        return dp[i][j] = grid[i][j] + min(down, right);
    }
    int minPathSum(vector<vector<int>>& grid) {
        
        return solve(grid, 0 , 0);
    }
};