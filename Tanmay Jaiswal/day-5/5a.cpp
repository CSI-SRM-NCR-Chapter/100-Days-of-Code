class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = nums[0];
        int c = 0;
        for (auto x: nums) {
            if (x == ele) {
                c++;
            }
            else {
                c--;
                if (c<1) {
                    c=1;
                    ele = x;
                    cout << ele << endl;
                }
            }
        }

        return ele;
    }
};