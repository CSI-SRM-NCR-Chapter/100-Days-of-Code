class Solution {
public:
    int wateringPlants(vector<int>& nums, int capacity) {
       int step=0;
        int vol=capacity;
        int j=0;
    
        
        for(int i=j;i<nums.size();i++)
        {
                 
            if(nums[i]<=capacity){
                step++;
                capacity-=nums[i];
                j++;
            }
            
            else if(capacity<nums[i]){
                step=step+2*i+1;
                capacity=vol-nums[i];
               j=i;
                
            }
            
        }
        return step;
    }
};
