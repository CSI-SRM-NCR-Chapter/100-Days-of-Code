class Solution {
public:
    void insertionSort(int n, vector<int> &arr){
        int temp=1,i=1,j=i-1;
        while(i<n){
                j=i-1;how
            while(j>=0){
                if(arr[j]>arr[i]){
                    swap(arr[i], arr[j]);
                }
                i--;j--;
            }
            i = ++temp;

            }
    }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0; i <n ; i++){
            nums1[m++] = nums2[i];
        }
        insertionSort(m,nums1);}

};
