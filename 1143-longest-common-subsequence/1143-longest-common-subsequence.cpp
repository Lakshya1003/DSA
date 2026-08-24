class Solution {
public:

    int fun(const string &s1 , const string& s2 , int n , int m , int i , int j , vector<vector<int>> &dp){
        if(i == n || j == m){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(s1[i] == s2[j]){
            return dp[i][j] =  1 + fun(s1 , s2, n , m , i + 1, j + 1 , dp);
        }
        int c1 = fun(s1,s2,n , m , i + 1 , j , dp);
        int c2 = fun(s1,s2,n , m , i , j + 1, dp);
        return dp[i][j] = max(c1 , c2);
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();
        vector<vector<int>> dp(n + 1 , vector<int>(m+1 , -1));
        int ans = fun(text1,text2,n,m,0,0,dp);
        return ans;
    }
};