class Solution {
public:
    string smallestNumber(string pattern) {
        vector<string> nums;
        int i=0;
        int j=0;
        string temp;
        for(int a=1; a<=pattern.length()+1; a++){
            nums.push_back(to_string(a));
        }
        for(i=1; i<=pattern.length();i++){
            if(pattern[i-1]=='D'){
                if(nums[i-1]<nums[i]){
                    swap(nums[i-1], nums[i]);
                    i=j;
                }
            }
            // if(pattern[i]=='I'){
            //     if(nums[i]>nums[i+1]){
            //         swap(nums[i], nums[i+1]);
            //         // i=0;
            //     }
            // }
        }
    for(auto x: nums){
        temp=temp+x;
        // cout<<x<<" ";
    }
    
    return temp;
    }
};
