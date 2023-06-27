class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums, 0, nums.size()-1);
    }

    TreeNode* helper(vector<int>& nums, int left, int right) {
        if (left > right) return nullptr;
        int maxx = nums[left];
        int maxi = left;

        for (int i=left; i<=right; i++){
            if (nums[i]>maxx) {
                maxx = nums[i];
                maxi = i;
            }
        }

        TreeNode* node = new TreeNode(maxx);
        node->left = helper(nums, left, maxi-1);
        node->right = helper(nums, maxi+1, right);

        return node;
    }
};
