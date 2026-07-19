class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> exi(nums.size(), 0);
        int imposter = 0;
        for(int i : nums){
            if(exi[i] > 0){
                imposter = i;
                break;
            }
            else{
                exi[i]++;
            }
        }
        return imposter;
    }
};