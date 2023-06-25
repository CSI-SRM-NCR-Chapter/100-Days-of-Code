class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n1 = str1.size(), n2 = str2.size();
        int n = min(n1, n2);
        string res = "";

        string t = "";
        for (int i=0; i<n; i++) {
            string s = "";
            t += str1[i];

            for (int j=0; j<n1/(i+1); j++) {
                s += t;
            }

            string u ="";
            for (int j=0; j<n2/(i+1); j++) {
                u += t;
            }
            
            if (s == str1 and u == str2) res = t;
        }

        return res;
    }
};
