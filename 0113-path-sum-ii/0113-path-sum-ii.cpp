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
    void path(TreeNode* root, int targetSum, vector<int> temp,
              vector<vector<int>>& ans) {
        if (!root)
            return;
        int dif = targetSum - root->val;

        if (dif == 0 && !root->left && !root->right) {
            temp.push_back(root->val);
            ans.push_back(temp);
        }

        temp.push_back(root->val);

        path(root->left, dif, temp, ans);
        path(root->right, dif, temp, ans);
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;

        path(root, targetSum, temp, ans);
        return ans;
    }
};