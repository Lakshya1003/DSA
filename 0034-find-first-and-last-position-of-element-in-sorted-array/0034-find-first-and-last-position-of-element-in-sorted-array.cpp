class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        if(nums.size() < 1){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }

        int id = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == target){
                ans.push_back(i);
                break;
            }
            id++;
        }
        if(id == nums.size()){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        for(int i = nums.size() - 1; i >= 0 ; i--){
            if(nums[i] == target){
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};