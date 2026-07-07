class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int , int> m;
        int ans = 0;
        m[0] = 1;
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
            int r = sum % k;
            if(r < 0) r += k;
            if(m.contains(r)){
                ans += m[r];
            }
                m[r]++;
        }
        return ans;
    }
};