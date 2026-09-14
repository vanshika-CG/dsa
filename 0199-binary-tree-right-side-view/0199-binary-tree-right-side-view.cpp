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
    void level(TreeNode* root, vector<int>& ans) {
        if (!root)
            return;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int s = q.size();

            for (int i = 0; i < s; i++) {
                TreeNode* top = q.front();
                q.pop();

                if (i == s - 1)
                    ans.push_back(top->val);

                if (top->left)
                    q.push(top->left);
                if (top->right)
                    q.push(top->right);
            }
        }
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        level(root, ans);
        return ans;
    }
};