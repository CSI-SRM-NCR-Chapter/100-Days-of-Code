class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx=0,c=0;
        for(int i=0;i<nums.size();i++){
            if (nums[i]){
                mx=max(mx,++c);
            }
            else{
                c=0;
            }
        }
        return mx;
    }
};

/*class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx=0,c=0;
        for(int i=0;i<nums.size();i++){
            if (nums[i]){
                c+=1;
            }
            else{
                mx=max(mx,c);
                c=0;
            }
        }
        mx=max(mx,c);
        return mx;
    }
};*/