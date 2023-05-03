class Solution {
public:
    string countAndSay(int n) {

        if (n==1) return "1";

        string say = countAndSay(n-1);

        int cnt = 1;
        string ans = "";

        for (int i=0; i<say.size()-1; i++) {
            if (say[i]==say[i+1]) cnt++;
            else {
                ans += to_string(cnt) + say[i];
                cnt = 1;
            }
        }

        return ans += (cnt > 1? to_string(cnt) : to_string(1)) + say[say.size()-1];
    }
};
