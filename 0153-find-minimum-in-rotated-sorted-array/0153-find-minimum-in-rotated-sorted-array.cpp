class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int h = n - 1;
        int ans = 0;
        while(l <= h){
            int m = l + (h - l)/2;
            if(nums[m] > nums[n-1]){
                l = m + 1;
            }else{
                ans = nums[m];
                h = m - 1;
            }
        }
        return ans;
    }
};