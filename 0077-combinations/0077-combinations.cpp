class Solution {
public:
    void fun(vector<int> &arr , int i , int n , int k , vector<vector<int>> &ans){
        if(arr.size() == k){
            ans.push_back(arr);
            return ;
        }
        if( i > n) return;
        for (int f = i; f <= n; f++) {
            arr.push_back(f);
            fun(arr, f + 1, n, k, ans);
            arr.pop_back();
        }
        }
    vector<vector<int>> combine(int n, int k) {
        vector<int> arr;
        vector<vector<int>> ans;
        fun(arr, 1, n , k , ans);
        return ans;
    }
};