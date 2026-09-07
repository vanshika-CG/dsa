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
    int deepestLeavesSum(TreeNode* root) {
        int sum = 0;

        if(!root) return sum;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int s = q.size();
            sum = 0;

            for (int i = 0; i < s; i++) {
                TreeNode* top = q.front();
                q.pop();

                sum += top->val;

                if (top->left)
                    q.push(top->left);
                if (top->right)
                    q.push(top->right);
            }
        }

        return sum;
    }
};