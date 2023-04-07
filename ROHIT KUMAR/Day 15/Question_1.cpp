class Solution {
public:
    string smallestNumber(string p) {
        int i=0;
        string res="1";
        char num='1';
        for(auto ch:p){
            if(ch=='I'){
                res.push_back(++num);
                i=res.size()-1;
            }
            else{
                res.push_back(++num);
                for(int k=res.size()-1;k>i;k--){
                    swap(res[k],res[k-1]);
                }
            }
        }
        return res;
    }
};
