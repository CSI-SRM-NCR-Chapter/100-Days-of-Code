class Solution {
public:
    void damn(vector<int> &h, vector<int> &right, vector<int> &left){
        int n = h.size();
        int mx = -1;
        for(int i=0; i<n; i++){
            left[i] = mx;
            mx = max(mx, h[i]);
        }
        mx = -1;
        for(int i=n-1; i>=0; i--){
            right[i] = mx;
            mx = max(mx, h[i]);
        }
    }

    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> right(n), left(n);
        damn(height, right, left);
        int ans = 0;

        for(int i=0; i<n; i++){
            if(min(right[i], left[i])>height[i])
            ans += min(right[i], left[i]) - height[i];
        }
        return ans;
    }
};
