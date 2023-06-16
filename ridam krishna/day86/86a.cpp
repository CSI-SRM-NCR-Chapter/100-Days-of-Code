class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(string x: details){
            int res=(x[11]-'0')*10+x[12]-'0';
            if(res>60) count++;
        }
        return count;
    }
};
