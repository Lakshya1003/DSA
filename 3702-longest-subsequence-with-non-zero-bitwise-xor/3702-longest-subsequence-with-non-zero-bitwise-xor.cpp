class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x = 0;

        bool z = true;
        for(int i : nums){
            if(i != 0) z = false;
        }

        if(z) return 0;

        for (int num : nums) {
            x ^= num;
        }

        if (x != 0)
            return nums.size();

        return nums.size() - 1;
    }
};