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
    void allpath(TreeNode* root, vector<string>& ans, string p) {

        if (!root->left && !root->right) {
            ans.push_back(p);
            return;
        }

        if (!root)
            return;

        if (root->left)
            allpath(root->left, ans, p + "->" + to_string(root->left->val));
        if (root->right)
            allpath(root->right, ans, p + "->" + to_string(root->right->val));
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        allpath(root, ans, to_string(root->val));

        return ans;
    }
};