class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(auto x: details){
            int temp = (x[11]-'0')*10 + (x[12]-'0');
            if(temp > 60) count++;
        }
        return count;
    }
};
