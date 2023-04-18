
class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> freq(10,0); 
        for(int i : nums1){
            freq[i]++;
        }
        for(int i:nums2){
            if(freq[i]>0){
                return i;
            }
        }
        int num1 = nums1[0];
        int num2 = nums2[0];
        int ans1 = num1*10 + num2;
        int ans2 = num2*10 + num1;
        if(num1>num2){
        return ans2;}
    
        return ans1;
        
    }
};