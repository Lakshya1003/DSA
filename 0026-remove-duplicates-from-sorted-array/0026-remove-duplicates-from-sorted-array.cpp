class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> cont;
        for (int i = 0; i < nums.size(); i++) {
            cont.insert(nums[i]);
        }
        nums.clear();
        for (int iter : cont) {
            nums.push_back(iter);
        }
        return cont.size();
    }
};