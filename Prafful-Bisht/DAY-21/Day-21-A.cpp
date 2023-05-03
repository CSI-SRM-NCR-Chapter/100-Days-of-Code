class Solution{
public:
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size(),-1);
        unordered_map<int,int>mp;
        stack<int>s;
        for(int i=0;i<nums2.size();i++){
            while(!s.empty() && s.top()<nums2[i]){
                mp[s.top()] = nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }
        for(int i =0;i<nums1.size();i++){
            if(mp.find(nums1[i])!=mp.end()){
                ans[i] = mp[nums1[i]];
            }

        }
        return ans;
    }
};