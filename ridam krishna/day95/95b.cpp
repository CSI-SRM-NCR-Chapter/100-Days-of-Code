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
    TreeNode* maximum( vector<int>& nums, int s, int e ){
        if( s >= e ){
            return NULL;
        }
        int maxi = -1;
        int idx = -1;
        for( int i = s; i < e; i++ ){
            if( nums[i] > maxi ){
                maxi = nums[i];
                idx = i;
            }
        }
        TreeNode* root = new TreeNode(maxi);
        root->left = maximum(nums,s,idx);
        root->right = maximum(nums,idx+1,e);

        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        return maximum(nums,0,nums.size());
    }
};
