/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s = "";
        if (!root)
            return s;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* top = q.front();
            q.pop();

            if (!top) {
                s.append("#,");
                continue;
            }

            s.append(to_string(top->val) + ',');

            q.push(top->left);
            q.push(top->right);
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data.empty())
            return nullptr;

        stringstream ss(data);
        string val;
        getline(ss, val, ',');

        TreeNode* root = new TreeNode(stoi(val));
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* top = q.front();
            q.pop();

            getline(ss, val, ',');

            if (val != "#") {
                top->left = new TreeNode(stoi(val));
                q.push(top->left);
            }

            getline(ss, val, ',');

            if (val != "#") {
                top->right = new TreeNode(stoi(val));
                q.push(top->right);
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));