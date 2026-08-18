class Solution {
public:

    int fun(vector<int>& nums, int n , int i , int cur , vector<vector<int>> &dp){
        if(i == n){
            return 0;
        }
        if(dp[i][cur + 1] != -1){
            return dp[i][cur + 1];
        }
        int c2 =  fun(nums,n,i+1 , cur ,dp);
        int c1 = 0;
        if (cur == -1 || nums[i] > nums[cur]) {
            c1 = 1 + fun(nums, n, i + 1, i, dp);
        }
        int ans = max(c1,c2);
        return dp[i][cur + 1] = ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1 , vector<int>(n + 1 , -1));
   
        int cur = -1;
        int ans = fun(nums,n,0,cur , dp);
        return ans;


    }
};