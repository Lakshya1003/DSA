class Solution {
public:
    
    int fun(vector<int>& nums , int i , int f , int n , vector<vector<int>> &dp){
        if( i >= n ) return 0;
        if(dp[i][f] != -1) return dp[i][f];
        if(f == 0)
        return dp[i][f] = fun(nums , i + 1 , 1 , n , dp);
        
        int a = nums[i] + fun(nums , i + 1 , 0 , n , dp );
        int b = fun(nums , i + 1 , 1 , n , dp);
        int ans = max(a,b);
        dp[i][f] = ans;
        return ans;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n , vector<int>(2,-1));
        int a = fun(nums , 0 , 0 , nums.size() , dp );
        int b = fun(nums , 0 , 1 , nums.size() , dp );
        return max(a,b);
    }
};