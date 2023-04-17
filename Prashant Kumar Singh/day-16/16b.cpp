class Solution {
public:
    int ans(vector<int>&cookies,vector<int>&person,int index,int k){
        if(index==cookies.size()){
            int max1=*max_element(person.begin(),person.end());
            return max1;
        }
        int take=INT_MAX;
        for(int i=0;i<k;i++){
            person[i]+=cookies[index];
            take=min(take,ans(cookies,person,index+1,k));
            person[i]-=cookies[index];
        }
        return take;
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> person(cookies.size());
        return ans(cookies,person,0,k);
    }
};
