class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0 ;
        int h = arr.size();
        int res = 0;
        while(l <= h){
            int mid = l + (h - l) / 2;
             if (arr[mid + 1] > arr[mid]){
                l = mid + 1;
            }
            else{
                res = mid;
                h = mid - 1;
            }
        }
        return res;
    }
};