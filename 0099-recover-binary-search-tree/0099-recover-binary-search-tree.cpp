class Solution {
public:
    vector<TreeNode*> nodes;

    void inorder(TreeNode* root) {
        if (root == nullptr) return;

        inorder(root->left);
        nodes.push_back(root);
        inorder(root->right);
    }

    void recoverTree(TreeNode* root) {
        inorder(root);

        vector<int> values;

        for (auto node : nodes) {
            values.push_back(node->val);
        }

        sort(values.begin(), values.end());

        for (int i = 0; i < nodes.size(); i++) {
            nodes[i]->val = values[i];
        }
    }
};