class Solution {
public:
    bool issafe(int index,int i,string s){
        while(index<=i){
            if(s[index++]!=s[i--]){
                return false;
            }
        }
        return true;
    }
    void part(vector<string>&path,vector<vector<string>>&ans,string s,int index){
        if(index==s.size()){
            ans.push_back(path);
            return;
        }
        for(int i=index;i<s.size();i++)
        {
        if(issafe(index,i,s)){
        path.push_back(s.substr(index,i-index+1));
        part(path,ans,s,i+1);
        path.pop_back();
        }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>path;
        part(path,ans,s,0);
        return ans;
    }
    
};