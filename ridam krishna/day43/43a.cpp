class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> v;
        int sum=0;

        for(auto x: operations){
            int n=v.size();
            if(x=="C"){
                v.pop_back();
            }
            else if(x=="D"){
                v.push_back(2*v.back());
            }
            else if(x=="+"){
                v.push_back(v.back()+v[n-2]);
            }
            else v.push_back(stoi(x));
        }
        for(auto y: v) sum+=y;
        return sum;
    }
};
