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
    long prev = LONG_MIN; // store last visited node value

    bool inorder(TreeNode* root) {
        if (!root) return true;

        // left subtree
        if (!inorder(root->left)) return false;

        // check current node
        if (root->val <= prev) return false;
        prev = root->val;

        // right subtree
        return inorder(root->right);
    }

    bool isValidBST(TreeNode* root) {
        return inorder(root);
    }
};
