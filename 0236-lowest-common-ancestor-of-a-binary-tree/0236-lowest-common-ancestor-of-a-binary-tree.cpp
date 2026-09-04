/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    int fun(TreeNode* root , TreeNode* p , TreeNode* q , TreeNode* &ans){
        if(!root) return 0;
        int l = fun(root->left , p , q , ans);
        int r = fun(root->right , p , q , ans);
        int s = 0;
        if(root == p || root == q){
            s = 1;
        }
        int t = l + r + s;
        if(t == 2 && !ans) ans = root;
        return t;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans = NULL;
        int d = fun(root, p,q , ans);
        return ans;
    }
};