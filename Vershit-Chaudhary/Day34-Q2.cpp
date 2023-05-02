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
vector<int>v;
void pp(TreeNode* toot){
    if(toot==NULL){
        return;
    }
    pp(toot->left);
    v.push_back(toot->val);
    pp(toot->right);
}
    int kthSmallest(TreeNode* root, int k) {
       pp(root);
        return v[k-1];
    }
};
