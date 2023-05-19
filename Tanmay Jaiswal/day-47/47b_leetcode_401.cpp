class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector <string> res;

        for(int i=0;i<12;i++) {
            for(int j=0;j<60;j++) {
                bitset<4> hour(i);
                bitset<6> min(j);

                if((hour.count()+min.count())==turnedOn) {
                    string s = "";
                    s += to_string(i) + (j<10?":0":":") + to_string(j);
                    res.push_back(s);
                }
            }
        }
        return res;
    }
};
