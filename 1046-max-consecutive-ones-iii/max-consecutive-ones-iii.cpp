class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int zc = 0;
        int res = 0;

        for (int h = 0; h < nums.size(); h++) {
            if (nums[h] == 0)
                zc++;

            while (zc > k) {
                if (nums[l] == 0)
                    zc--;
                l++;
            }

            res = max(res, h - l + 1);
        }

        return res;
    
    }
};