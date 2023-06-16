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
    vector<int> nodes;
public:
    int getMinimumDifference(TreeNode* root) {
        inorder_dfs(root);

        int n = nodes.size();
        int res = nodes[n-1];

        for (int i=1; i<n; i++)
            res = min(res, nodes[i]-nodes[i-1]);

        return res;
    }

    void inorder_dfs(TreeNode* root) {
        if (!root) return;

        inorder_dfs(root->left);
        nodes.push_back(root->val);
        inorder_dfs(root->right);
    }
};
