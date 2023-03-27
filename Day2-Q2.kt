class Solution {
    fun merge(nums1: IntArray, m: Int, nums2: IntArray, n: Int): Unit {
        var m=m-1
        var n=n-1
        var length=m+1+n
        while(length>=0 && m>=0 && n>=0){
            if(nums1[m]<nums2[n]){
                nums1[length]=nums2[n]
                n--
            }
            else{
                nums1[length]=nums1[m]
                m--
            }
            length--
        }
        while(m>=0){
            nums1[length]=nums1[m]
            length--
            m--
        }
        while(n>=0){
            nums1[length]=nums2[n]
            length--
            n--
        }
    }
}
