class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int z = 0;
        for(unsigned int i =0;i < nums.size(); i++)
        {
            z = z^nums[i];
        }
        return z;
    }
}; //Day 2.1

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> v(m);
        for(unsigned int x = 0; x < m; x++)
            v[x] = nums1[x];
        int i=0,j=0,t=0;
        while(i<m&&j<n)
        {
            if(v[i]<nums2[j])
                nums1[t++] = v[i++];
            else
                nums1[t++] = nums2[j++];
        }
        while(i<m)
            nums1[t++] = v[i++];
        while(j<n)
            nums1[t++] = nums2[j++];
    }
}; //Day 2.2