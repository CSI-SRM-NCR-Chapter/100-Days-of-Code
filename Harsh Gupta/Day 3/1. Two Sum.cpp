class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        for(int i = 0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    a.push_back(i);
                    a.push_back(j);
                }
            }
        }
        return a;
    }
};

// class Solution {
// private:
//     vector<int> index;
//     vector<int> merge(vector<int> first, vector<int> second){
//         int i = 0, j= 0;
//         vector<int> ans;
//         while(i<first.size() && j<second.size()){
//             if(first[i]<=second[j]){
//                 ans.push_back(first[i]);
//                 i++;
//             }
//             else{
//                 ans.push_back(second[j]);
//                 j++;
//             }
//         }
//         while(i<first.size()){
//             ans.push_back(first[i]);
//             i++;
//         }
//         while(j<second.size()){
//             ans.push_back(second[j]);
//             j++;
//         }
//         return ans;
//     }
//     void sort(vector<int> &nums){
//         if(nums.size()<=1){
//             return;
//         }
//         int mid = nums.size()/2;
//         vector<int> first;
//         vector<int> second;
//         for(int i =0 ; i<nums.size(); i++){
//             if(i<mid){
//                 first.push_back(nums[i]);
//             }
//             else{
//                 second.push_back(nums[i]);
//             }
//         }
//         sort(first);
//         sort(second);
//         nums= merge(first,second);
//     }
//     int search(int key,vector<int> nums, int s, int e){
//         int mid = s+((e-s)/2);
//         while(s<=e){
//             if(nums[mid]==key){
//                 return mid;
//             }
//             else if(nums[mid]>key){
//                 return search(key, nums, s, mid-1);
//             }
//             else{
//                 return search(key, nums, mid+1, e);
//             }
//         }
//         return -1;
//     }
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i = 0; i<nums.size(); i++){
//             index.push_back(i);
//         }
//         sort(nums);
//         vector<int> ans;
//         for(int i = 0; i<nums.size(); i++){
//             int key = target - nums[i];
//             int a = search(key,nums, i+1, nums.size()-1);
//             if(a==-1){
//                 continue;
//             }
//             else{
//                 ans.push_back(i);
//                 ans.push_back(a);
//                 return ans;
//             }

//         }
//         return ans;
//     }
// };