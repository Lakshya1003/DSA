class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> m1;
        unordered_map<int, int> m2;
        for (int i : nums1)
            m1[i]++;
        for (int i : nums2)
            m2[i]++;
        for(auto &i : m1){
            if(m2[i.first] > 0){
                int t = min(i.second , m2[i.first]);
                for(int j = 0 ; j < t ; j++) ans.push_back(i.first);
            }
        }
        return ans;
        
    }
};