class Solution {
public:
    int trap(vector<int>& height) {
        int current, count, temp;
        current = count = temp = 0;
        for (int i = 0; i < height.size(); i++){
            if (height[i]>current) {current = height[i]; count += temp; temp = 0;}
            else if (height[i]<current) temp += current - height[i];
        }

        current = temp = 0;
        for (int i = height.size()-1; i >=0; i--){
            if (height[i]>=current) {current = height[i]; count += temp; temp = 0;}
            else if (height[i]<current) temp += current - height[i];
        }

        return count;
    }
};