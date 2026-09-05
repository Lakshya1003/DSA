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
    void fun(TreeNode* root , int t , bool &ans ){
        if(!root) return;
        if(ans) return;
        t -= root->val;
        if(!root->left && !root->right && t == 0){
            ans = true;
            return;
        }
        fun(root->left , t , ans);
        fun(root->right , t , ans);
    }
    bool hasPathSum(TreeNode* root, int t) {
        bool ans = false;
        fun(root , t , ans);
        return ans;
    }
};