class Solution {
public:
    int fun(vector<int>& coins, int i, int amount ,vector<vector<int>> &dp ) {
        // Exact amount formed
        if (amount == 0) {
            return 0;
        }

        // No coins left
        if (i == coins.size()) {
            return dp[i][amount] = 1e9;
        }
        if (dp[i][amount] != -1){
            return dp[i][amount];
        }

        // Don't take current coin
        int notTake = fun(coins, i + 1, amount , dp);

        // Take current coin
        int take = 1e9;
        if (coins[i] <= amount) {
            take = 1 + fun(coins, i, amount - coins[i] , dp);
        }

        return dp[i][amount] = min(take, notTake);
    }

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
          vector<vector<int>> dp(n+1 , vector<int> (amount+1 , -1));
        int ans = fun(coins, 0, amount , dp);
        
      

        if (ans == 1e9) {
            return -1;
        }

        return ans;
    }
};