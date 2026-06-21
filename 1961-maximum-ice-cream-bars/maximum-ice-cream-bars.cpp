class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int ice = 0;
        sort(costs.begin(), costs.end());
        for (int i = 0; i < costs.size(); i++) {
            if (coins >= costs[i]) {
                coins = coins - costs[i];
                ice++;
            }
        }
        return ice;
    }
};