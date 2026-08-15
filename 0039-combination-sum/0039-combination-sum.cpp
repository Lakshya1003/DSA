class Solution {
public:

    void fun(vector<int>& a , int n , int i , vector<vector<int>> &ans , int sum , vector<int> &t , int target){
        if( i == n ){
            return;
        }
        if(sum == target){
            ans.push_back(t);
            return;
        }
        if(sum > target) return;

        t.push_back(a[i]);
        fun(a, n, i, ans, sum + a[i], t, target);
        t.pop_back();
        fun(a, n, i + 1, ans, sum, t, target);
    }
    vector<vector<int>> combinationSum(vector<int>& a, int target) {
        vector<vector<int>> ans;
        int n = a.size();
        vector<int> t ;
        int sum = 0;
        fun(a , n , 0 , ans , sum , t ,  target);
        return ans;
    }
};