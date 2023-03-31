class Solution {
private:
    vector<int> merge(vector<int> first, vector<int> second){
    int i = 0, j= 0;
    vector<int> ans;
    while(i<first.size() && j<second.size()){
        if(first[i]<=second[j]){
            ans.push_back(first[i]);
            i++;
        }
        else{
            ans.push_back(second[j]);
            j++;
        }
    }
    while(i<first.size()){
        ans.push_back(first[i]);
        i++;
    }
    while(j<second.size()){
        ans.push_back(second[j]);
        j++;
    }
    return ans;
}
void sort(vector<int> &nums){
    if(nums.size()<=1){
        return;
    }
    int mid = nums.size()/2;
    vector<int> first;
    vector<int> second;
    for(int i =0 ; i<nums.size(); i++){
        if(i<mid){
            first.push_back(nums[i]);
        }
        else{
            second.push_back(nums[i]);
        }
    }
    sort(first);
    sort(second);
    nums= merge(first,second);
}
public:
    int majorityElement(vector<int>& nums) {
        sort(nums);
        // int max, max_count = 0;
        return nums[nums.size()/2];
    }
};
