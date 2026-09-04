
class Solution {
public:

    void fun(TreeNode* node1, TreeNode* node2, bool &same) {
        if (!same) return;

        // Both nodes are NULL -> same
        if (!node1 && !node2) return;

        // One is NULL and the other isn't -> different
        if (!node1 || !node2) {
            same = false;
            return;
        }

        // Values are different
        if (node1->val != node2->val) {
            same = false;
            return;
        }

        fun(node1->left, node2->left, same);
        fun(node1->right, node2->right, same);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool same = true;
        fun(p, q, same);
        return same;
    }
};

