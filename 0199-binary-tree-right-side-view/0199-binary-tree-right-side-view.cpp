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
    map<int, int> m;

    void level(TreeNode* root) {
        if (!root)
            return;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});

        while (!q.empty()) {
            TreeNode* curr = q.front().first;
            int lev = q.front().second;

            q.pop();

            m[lev] = curr->val;

            if (curr->left)
                q.push({curr->left, lev + 1});
            if (curr->right)
                q.push({curr->right, lev + 1});
        }
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;

        level(root);

        for (auto& p : m) {
            ans.push_back(p.second);
        }

        return ans;
    }
};