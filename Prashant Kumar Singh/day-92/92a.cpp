class Solution {
public:
    long long calculate(vector<int>&nums, vector<int>& cost, long long median){
        long long ans = 0;
        for(int i=0;i<nums.size();i++)
            ans += abs(1ll*nums[i]-median)*(1ll*cost[i]);
        return ans;  
    }

    long long minCost(vector<int>& nums, vector<int>& cost) {
        long long total = 0;
        long long sum = 0;
        vector<pair<int,int>> temp;

        for(int i=0; i<nums.size(); i++)
            temp.push_back({nums[i], cost[i]});

        sort(temp.begin(), temp.end());

        for(int i=0; i<nums.size(); i++)
        sum += temp[i].second;

        long long median;
        int i = 0;

        while(total < (sum+1)/2 && i<nums.size()){

            total += 1ll * temp[i].second;
            median = temp[i].first;
            i++;
        }
        return calculate(nums, cost, median);
    }
};
