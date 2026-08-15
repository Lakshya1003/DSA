class Solution {
public:


    void fun(vector<int> &a , int n , int i , vector<int> &temp , vector<vector<int>> &ans){
        if(i == n ){
            ans.push_back(temp);
            return;
        }
        fun(a,n,i+1,temp,ans);
        temp.push_back(a[i]);
        fun(a,n,i+1,temp,ans);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        fun(nums,nums.size(),0,temp,ans);
        return ans;
    }
};