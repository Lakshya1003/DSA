class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        if(nums.size() == 1) return nums;
        vector<int> ans;
        for(int i : nums){
            if(i < pivot) ans.push_back(i);
        }
        for(int i : nums){
            if(i == pivot) ans.push_back(i);
        }
        for(int i : nums){
            if(i > pivot) ans.push_back(i);
        }
        return ans;
    }
};