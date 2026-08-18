class Solution {
public:
    bool fun(vector<int> &a , int n , int i , int sum , int cur , vector<vector<int>> &dp){
        if (i == n){
            if(cur == sum){
                return true;
            }
            return false;
        }
        if(dp[i][cur] != -1){
            return dp[i][cur];
        }

        if(cur > sum ){
            return dp[i][cur] = fun(a,n,i + 1,sum,cur , dp);
        }
        bool c1 = fun(a,n,i + 1,sum,cur + a[i] , dp);
        bool c2 = fun(a,n,i+1 ,sum,cur,dp);
        return dp[i][cur] = c1 || c2;
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0 ;
        int n = nums.size(); 
        for(int i : nums){
            sum += i;
        }
        if(sum %2 != 0) return false;
        vector<vector<int>> dp(n +1 , vector<int> (sum +1 , -1) );
        sum /= 2;

        bool ans = fun(nums, n , 0 , sum , 0 , dp);
        return ans;
    }
};