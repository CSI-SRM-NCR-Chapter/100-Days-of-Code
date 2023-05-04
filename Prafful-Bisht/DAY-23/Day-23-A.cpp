class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>temp;
        for(int i:nums1){
            temp.push_back(i);
        }
                for(int i:nums2){
            temp.push_back(i);
        }
        sort(temp.begin(),temp.end());
        int n = temp.size();
        if(temp.size()%2==0){
            return (temp[n/2]+temp[(n/2)-1])/2.0;
        }
        return temp[n/2.0];
    }
};