/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void fun(TreeNode* root , vector<int> &tmp , vector<vector<int>> &ans , int target){
        if(!root) return;
        tmp.push_back(root->val);
        target -= root->val;
        if (!root->left && !root->right && target == 0) {
            ans.push_back(tmp);
        }
   
        fun(root -> left , tmp , ans , target );
        fun(root->right , tmp, ans,target);
        tmp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int t) {
        vector<vector<int>> ans;
        vector<int> tmp;
        fun(root , tmp , ans , t);
        return ans;

    }
};