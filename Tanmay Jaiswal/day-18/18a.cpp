class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int i=0, j=n-1;

        int leftMax = height[0], rightMax = height[n-1];
        int ans = 0;
        
        while (i<j) {
            if (leftMax < rightMax) {
                i++;
                leftMax = max(leftMax, height[i]);
                ans += leftMax - height[i];
            }
            else {
                j--;
                rightMax = max(rightMax, height[j]);
                ans += rightMax - height[j];
            }
        }
        
        return ans;
    }
};