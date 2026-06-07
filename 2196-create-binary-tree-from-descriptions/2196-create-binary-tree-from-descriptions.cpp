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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int , TreeNode*> m;
        unordered_set<int> c;

        for(auto & d : descriptions){
            int parent = d[0];
            int child = d[1];
            int left = d[2];

            if(!m.count(parent)) m[parent] = new TreeNode(parent);
            if(!m.count(child)) m[child] = new TreeNode(child);

            if(left) m[parent] -> left = m[child];
            else m[parent] -> right = m[child];

            c.insert(child);
        }

        for(auto & d : descriptions){
            int p = d[0];

            if(!c.count(p)) return m[p];
        }
        return nullptr;
    }
};