class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int l = 0 ;
        int h = n - 1;
        while(l <= h){
            int mid = l + (h - l)/2;
            int e1 = matrix[mid][0];
            int e2 = matrix[mid][m - 1];
            if(e2 >= target && e1 <=  target){
                int l1 = 0;
                int h1 = m - 1;
                while(l1 <= h1){
                    int m2 = l1 + (h1 - l1) / 2;
                    if(matrix[mid][m2] == target) return true;
                    else if(matrix[mid][m2] > target) h1 = m2 - 1;
                    else if(matrix[mid][m2] < target) l1 = m2 + 1;
                }
                return false;
            }else if(e1 > target){
                h = mid - 1;
            }
            else if (e2 < target){
                l = mid + 1;
            }
        }
        return false;
    }
};