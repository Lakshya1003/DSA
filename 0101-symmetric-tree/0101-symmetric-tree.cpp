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
void fun(TreeNode* node1 , TreeNode* node2 , bool &same){
     if (!same) return;

   
        if (!node1 && !node2) return;

    
        if (!node1 || !node2) {
            same = false;
            return;
        }

     
        if (node1->val != node2->val) {
            same = false;
            return;
        }

        fun(node1->left, node2->right, same);
        fun(node1->right, node2->left, same);
}
    bool isSymmetric(TreeNode* root) {
        bool ans = true;
        fun(root->left , root->right , ans);
        return ans;
    }
};