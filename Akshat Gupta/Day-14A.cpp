class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int s=0, e=num;
        long long int mid=s+(e-s)/2;
        while(s<=e){
            if(mid*mid==num){
                return 1;
            }
            else if(mid*mid>num){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return 0;
    }
};