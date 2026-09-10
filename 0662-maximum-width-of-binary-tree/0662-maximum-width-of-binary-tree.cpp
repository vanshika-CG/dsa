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
    int widthOfBinaryTree(TreeNode* root) {
        if (!root)
            return 0;

        int maxwidth = 0;
        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root, 0});

        while (!q.empty()) {
            int s = q.size();
            unsigned long long first = q.front().second;
            unsigned long long last = q.back().second;

            maxwidth = max(maxwidth, (int)(last - first + 1));

            for (int i = 0; i < s; i++) {
                auto top = q.front();
                q.pop();

                if (top.first->left)
                    q.push({top.first->left, top.second * 2 + 1});
                if (top.first->right)
                    q.push({top.first->right, top.second * 2 + 2});
            }
        }
        return maxwidth;
    }
};