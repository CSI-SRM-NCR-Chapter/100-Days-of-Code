class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums, 0, nums.size()-1);
    }

    TreeNode* helper(vector<int>& nums, int l, int r) {
        if (l > r) return nullptr;

        int n = nums.size();
        int maxx = nums[l]; // max value
        int maxi = l; // max value's index


        for (int i=l; i<=r; i++) {
            if (nums[i]>maxx) {
                maxx = nums[i];
                maxi = i;
            }
        }

        TreeNode* node = new TreeNode(maxx);
        node->left = helper(nums, l, maxi-1);
        node->right = helper(nums, maxi+1, r);

        return node;
    }
};
