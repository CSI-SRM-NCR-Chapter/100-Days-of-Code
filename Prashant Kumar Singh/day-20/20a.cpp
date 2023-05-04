class Solution {
public:
    int countHillValley(vector<int>& nums) {

        int ans=0, n=nums.size();

        for(int i=1; i<n; i++){

            if(nums[i] == nums[i-1]) continue; 
            
            int backward = i-1, forward = i+1;

            while(backward >= 0 && nums[backward] == nums[i]) {

                backward--;

            }
			
            if(backward < 0) continue; 

            while(forward < n && nums[forward] == nums[i]){

                forward++;

            }
            
            if(forward == n) continue; 
            
            if(nums[backward] < nums[i] && nums[forward] < nums[i]) ans++;

            else if(nums[backward] > nums[i] && nums[forward] > nums[i]) ans++;

        }

        return ans;
        
    }

};
