class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int h = n - 1;
        while(l <= h){
            int m = l + (h - l) / 2;
            if(nums[m] == target) return m;
            if(nums[m] > nums[n-1]){
                if(nums[m] < target)
                    l = m + 1;
                else{
                    if(nums[0] > target)
                        l = m + 1;
                    else{
                        h = m -1 ;
                    }
                }
                continue;
            }
            if(nums[m] > target ){
                h = m - 1;
            }
            else{
                if(nums[n-1] < target)
                    h = m - 1;
                else{
                    l = m + 1;
                }
            }
        }
        return -1;
    }
};