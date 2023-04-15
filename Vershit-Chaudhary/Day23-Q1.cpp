class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,l1=nums1.size(),l2=nums2.size(),arr[l1+l2],k=0;
        while(i!=l1 || j!=l2){
            if(j==l2){
                arr[k]=nums1[i];
                i++;
                k++;
                continue;
            }
            else if(i==l1){
                arr[k]=nums2[j];
                j++;
                k++;
                continue;
            }
            if(nums1[i]<=nums2[j]){
                arr[k]=nums1[i];
                i++;
            }
            else{
                arr[k]=nums2[j];
                    j++;
            }
            k++;
        }
        double ans;
        if(k%2==0){
            ans=(arr[k/2]+arr[(k/2)-1]);
            ans=ans/2;
        }
        else{
            ans=arr[k/2];
        }
        return ans;
    }
};
