class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> vec;
        string word;
        string ans="";
        while(ss>>word){
            vec.push_back(word);
        }
        reverse(vec.begin(),vec.end());
        for(string st:vec){
            ans=ans+st+" ";
        }
        ans.erase(ans.end()-1);
        return ans;
    }
};
