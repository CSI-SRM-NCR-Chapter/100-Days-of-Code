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
    int res = 0;

public:
    int diameterOfBinaryTree(TreeNode* root) {
        maxHeight(root);
        return res;
    }

    int maxHeight(TreeNode* root) {
        if (!root) return 0;

        int x = maxHeight(root->left);
        int y = maxHeight(root->right);

        res = max(res, x+y);

        return max(x,y) + 1;
    }
};
