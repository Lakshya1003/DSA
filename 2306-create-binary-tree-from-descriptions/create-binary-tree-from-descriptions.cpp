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

    TreeNode* create(unordered_map<int,pair<int,int>> &m, int root){
        if(root == 0){
            return nullptr;
        }

        TreeNode* tan = new TreeNode(root);

        int l = m[root].first;
        tan->left = create(m, l);

        int r = m[root].second;
        tan->right = create(m, r);

        return tan;
    }

    TreeNode* createBinaryTree(vector<vector<int>>& de) {
        unordered_map<int,pair<int,int>> m;
        set<int> se;

        for(int i = 0; i < de.size(); i++){
            if(de[i][2] == 1){
                m[de[i][0]].first = de[i][1];
            }
            else{
                m[de[i][0]].second = de[i][1];
            }
            se.insert(de[i][1]);
        }

        int root = -1;

        for(int i = 0; i < de.size(); i++){
            if(!se.contains(de[i][0])){
                root = de[i][0];
                break;
            }
        }

        return create(m, root);
    }
};