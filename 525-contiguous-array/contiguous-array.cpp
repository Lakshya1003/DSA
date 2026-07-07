class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int , int> m;
        int one = 0;
        int zero = 0;
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1) one++;
            else zero++;
            int d= zero - one ;
            if(d == 0){
                ans = max(ans , i + 1);
            }
            else if(m.contains(d)){
                int a = i - m[d];
                ans = max(ans , a);
            }
            else{
                m[d] = i;
            }
        }
        return ans;
    }
};