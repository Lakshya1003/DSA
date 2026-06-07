class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged = {nums1.begin(),nums1.end()};
        for(int i : nums2){
            merged.push_back(i);
        }
        sort(merged.begin(),merged.end());
        int size = (merged.size() / 2);
        double median;
        if(merged.size()%2 != 0){
            median = merged[size];
        }
        else{
            median = (merged[size] + merged[size - 1])/2.0;
        }
        return median;
    }
};