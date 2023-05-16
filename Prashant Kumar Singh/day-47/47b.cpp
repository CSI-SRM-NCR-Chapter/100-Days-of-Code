class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        for(int i=0; i<12; i++){
            for(int j=0; j<60; j++){
                string temp = "";
                if(__builtin_popcount(i) + __builtin_popcount(j) == turnedOn){
                    temp = temp + to_string(i) + ":";

                    if(j < 10){
                        temp = temp + "0";
                    }
                    temp = temp + to_string(j);
                    ans.push_back(temp);
                }
                
            }
        }
        return ans;
    }
};
