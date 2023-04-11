class Solution {
public:
    bool isPerfectSquare(long int num) {
        long int beg=1,end=num;
        while(beg<=end){
            long int mid=(beg+end)/2;
            long int ans=mid*mid;
            if(ans==num){
                return true;
            }
            else{
                if(ans>num){
                    end=mid-1;
                }
                else{
                    beg=mid+1;
                }
            }
        }
        return false;
    }
};