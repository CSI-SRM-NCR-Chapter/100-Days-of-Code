class Solution
{
public:
    int minNumber(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), end(nums1));
        sort(nums2.begin(), end(nums2));

        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0, j = 0;

        while (i < n1 and j < n2)
        {
            if (nums1[i] == nums2[j])
                return nums1[i];
            else if (nums1[i] > nums2[j])
                j++;
            else
                i++;
        }

        int a = min(nums1[0], nums2[0]);
        int b = max(nums1[0], nums2[0]);

        return a * 10 + b;
    }
};