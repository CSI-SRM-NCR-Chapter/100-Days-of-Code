class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x=0;
        int temp=1,a=0;
        for(auto i: nums){
            x=x+i;
            a=a+temp;
            temp++;
        }
        //cout<<x<<" "<<temp<<endl;
        return (a-x);
    }
};
