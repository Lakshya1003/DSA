class Solution {
public:
    int fun(int n , int m , int i , int j , vector<vector<int>>  &dp){
        if(i == n - 1 && j == m - 1) return 1;
        if(i >= n || i < 0 || j >= m || j < 0) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = fun(n,m,i+1,j,dp) + fun(n,m,i,j+1,dp);
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>>  dp(n+1 , vector<int> (m+1 , -1));
        int ans= fun(n,m,0,0 , dp);
        return ans;
    }
};