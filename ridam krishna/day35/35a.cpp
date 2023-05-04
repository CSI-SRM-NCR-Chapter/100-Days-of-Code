class Solution {
public:
    int candy(vector<int>& r) {
        vector<int> temp(r.size(),1);
        int count=0;
        for(int i=1; i<r.size(); i++){
            if(r[i]>r[i-1]){
                temp[i]=temp[i]+temp[i-1];
            }
        }
        for(int i=r.size()-2; i>=0; i--){
            if(r[i]>r[i+1]){
                temp[i]=max(temp[i],temp[i+1]+1);
            }
        }
        for(auto x: temp){
            count=count+x;
            // cout<<x<<" ";
        }

        return count;
    }
};
