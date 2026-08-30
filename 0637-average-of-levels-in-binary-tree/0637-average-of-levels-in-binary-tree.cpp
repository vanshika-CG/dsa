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
    void level(TreeNode* root, vector<double>& ans) {
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            double sum = 0;
            int s = q.size();

            for (int i = 0; i < s; i++) {
                TreeNode* node = q.front();
                q.pop();

                sum += node->val;

                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }

            ans.push_back(sum / s);
        }
    }

    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;

        level(root, ans);

        return ans;
    }
};