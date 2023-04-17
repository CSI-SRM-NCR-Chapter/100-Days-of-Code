class Solution {
public:
    string reverseWords(string s) {
        vector<string> str;
        string word="";
        for(auto i:s){
            if(isblank(i)){
                if(word!=""){
                    str.push_back(word);
                    word="";
                }
                continue;
            }
            else{
                word+=i;
            }
        }
        if (word!=""){
            str.push_back(word);
        }
        string news="";
        for(int i=str.size()-1;i>=0;i--){
            news+=str[i];
            if(i!=0){
                news+=" ";
            }
        }
        return news;
    }
};