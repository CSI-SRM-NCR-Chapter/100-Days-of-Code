class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp=0, res=0;
        for(auto x: nums){
            
            if(x==1){
                temp=temp+x;
                if(temp>=res) res=temp;
            }
            else temp=0;
        }
        
        return res;
        
    }
};
