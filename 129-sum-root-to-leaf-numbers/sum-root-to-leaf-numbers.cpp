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

   void su(TreeNode* root, string a, vector<int>& v) {
    a += to_string(root->val);

    if (root->left == nullptr && root->right == nullptr) {
        v.push_back(stoi(a));
        return;
    }

    if (root->left)
        su(root->left, a, v);

    if (root->right)
        su(root->right, a, v);
}

int sumNumbers(TreeNode* root) {
    vector<int> v;
    su(root, "", v);
    int ans = 0;
    for (int x : v)
        ans += x;
    return ans;
}
};