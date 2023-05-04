class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0,maxi=0;
        vector<char> temp;
        vector<char>::iterator it;
        for(int i=0;i<s.length();i++){
            if(i>=1 && s[i]==s[i-1]){
                count=1;
                temp.clear();
                temp.push_back(s[i]);
                continue;
            }
            it=find(temp.begin(),temp.end(),s[i]);
            if(it==temp.end()){
                count++;
                maxi=max(count,maxi);
                temp.push_back(s[i]);
            }
            else{
                temp.erase(temp.begin(),it);
                temp.erase(temp.begin());
                //maxi=max(count,maxi);
                temp.push_back(s[i]);
                count=temp.size();
                //maxi=max(count,maxi);
            }
        }
        return maxi;
    }
};
