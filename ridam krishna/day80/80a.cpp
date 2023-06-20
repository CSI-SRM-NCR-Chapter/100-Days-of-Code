class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        long int left=index;
        long int right=n-index-1;
        long int high=maxSum;
        long int low=1, mid=0;
        long int res=0;

        while(low<=high){ //ntmeyt
            mid=(low+high)/2;
            long int sum=mid;
            long int sumLeft=0, sumRight=0;
            long int m=mid-1;
            if(left<=m) sumLeft+=(m*(m+1)/2)-(m-left)*(m-left+1)/2;
            else sumLeft+=(m*(m+1)/2)+(1*(left-m));

            if(right<=m) sumRight+=(m*(m+1)/2)-(m-right)*(m-right+1)/2;
            else sumRight+=(m*(m+1)/2)+(1*(right-m));

            sum+=sumLeft+sumRight;

            if(sum<=maxSum){
                res=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return res;
    }
};
