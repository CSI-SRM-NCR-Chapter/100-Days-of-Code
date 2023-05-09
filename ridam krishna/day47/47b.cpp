class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        for(int i=0; i<12; i++){
            for(int j=0;j<60; j++){
                bitset<4> h(i);
                bitset<6> m(j);
                
                if((h.count()+m.count())==turnedOn){
                    string st="";
                    st+=to_string(i)+(j<10?":0":":")+to_string(j);
                    ans.push_back(st);
                }
            }
        }
        return ans;
    }
};
