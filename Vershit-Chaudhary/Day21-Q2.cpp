class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        map<char,int> temp;
        vector<string> ans;
        vector<string> keys={"qwertyuiopQWERTYUIOP","asdfghjklASDFGHJKL","zxcvbnmZXCVBNM"};
        for(int i=0;i<3;i++){
            for (auto &ch : keys[i]) {
                temp.insert(make_pair(ch, i));
            }
        }
        for(auto &word:words){
            bool flag=true;
            for(int j=1;j<word.length();j++){
                if(temp[word[j]]!=temp[word[j-1]]){
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                ans.push_back(word);
            }
        }
        return ans;
    }
};
