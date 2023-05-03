class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int low=0, mid=0;
        int high=nums.size()-1;
        while(low<=high){
            mid=(low+high)/2;

            if(nums[mid]==target) break;
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1; 
        }
        if(low>high) return v={-1,-1};

        int m1=mid;
        int m2=mid;

        while(m1>=0){
            if(target==nums[m1]){
                m1--;
            }
            else break;
        }
        v.push_back(m1+1);

        while(m2>=0 and m2<nums.size()){
            if(target==nums[m2]){
                m2++;
            }
            else break;
        }

        v.push_back(m2-1);

        return v;
    }
};
