/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        if (!root)
            return nullptr;

        if(sum(root) == 0) return nullptr;

        int l = sum(root->left);
        if (l == 0)
            root->left = nullptr;
        int r = sum(root->right);
        if (r == 0)
            root->right = nullptr;

        pruneTree(root->left);
        pruneTree(root->right);

        return root;
    }

    int sum(TreeNode* root) {
        if (!root)
            return 0;
        return sum(root->left) + sum(root->right) + root->val;
    }
};