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
    int count=0;
    int kth=-1;   
    int kthSmallest(TreeNode* root, int k) {
        if (!root or kth != -1) return kth;
        kthSmallest(root->left, k);
        count++;
        if (count==k) return kth=root->val;
        kthSmallest(root->right, k);
        return kth;
    }
};
