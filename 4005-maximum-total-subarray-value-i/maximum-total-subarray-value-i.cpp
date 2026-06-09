class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int ma = INT_MIN;
        int mi = INT_MAX;
        for(int i : nums){
            if(i < mi) mi = i;
            if(i > ma) ma = i;
        }
        return ((long long)ma - (long long)mi) * k;

    }
};