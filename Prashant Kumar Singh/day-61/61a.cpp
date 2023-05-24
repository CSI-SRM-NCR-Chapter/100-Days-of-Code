// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=0, end=n;
        cout<<end-start<<end;
        while(end-start>1){
            int mid=start+(end-start)/2;
            /** mid = (start+end)) / 2; **/
            if(isBadVersion(mid))  end=mid;
            else  start=mid;
        }
        return end;
    }
};
