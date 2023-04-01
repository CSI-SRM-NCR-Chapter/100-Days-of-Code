class Solution {
public:
    bool isUgly(int n) {
        if(n==0) return 0;
        while(n!=0)
        {
            if(n==1) return 1;
            if(n%2==0)
                n /= 2;
            else if(n%3==0)
                n /= 3;
            else if(n%5==0)
                n /= 5;
            else
                return 0;
        }
        return 1;
    }
};  //Day 7.1

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        int n = nums.size();
        while(i<n&&j<n)
        {
            while(i<n && nums[i]!=0) i++;
            while(j<n && nums[j]==0) j++;
            //std::cout<<i<<' '<<j<<endl;
            if(i<n && j<n && j>i && nums[i]==0 && nums[j]!=0) 
            {
                swap(nums[i++],nums[j++]);
                //std::cout<<"swapped\n";
            }
            else
            {
                if(i>j) j++;
                else i++;
            }
        }
    }
};  //Day 7.2