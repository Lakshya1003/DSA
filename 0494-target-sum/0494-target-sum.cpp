class Solution {
public:
    int fun(vector<int>& nums , int n , int i , int t , int sum , vector<vector<int>> &dp , int ts){
        if(i == n) {
            return (sum == t) ? dp[i][sum + ts] =  1 : 0;
        }
        if(dp[i][sum + ts] != -1){
            return dp[i][sum + ts];
        }
        int p = fun(nums , n , i + 1 , t , sum + nums[i], dp , ts);
        int nega = fun(nums , n , i + 1 , t , sum - nums[i] , dp , ts);
        return dp[i][sum + ts] = p + nega;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int ts = 0;
        for(int i : nums){
            ts+= i;
        }
        if(abs(target) > ts) return 0;
    
        vector<vector<int>> dp(n +1 , vector<int>(2 * ts + 1, -1));
        int ans = fun(nums, n , 0 , target , 0 , dp , ts);
        return ans;
    }
};