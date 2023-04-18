class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> ans;

       
        for(int i = 0; i < t.size(); i++){
			ans[t[i]]++;
		}
		for(int i = 0; i < s.size(); i++){
			ans[s[i]]--;
		}
        for(auto i : ans){
			if(i.second == 1){
				return i.first;
			}
        }
        return 'a';
    }
};
