class Solution {
public:
	int prefixCount(vector<string>& words, string pref) {
		int count = 0;
		for(auto wd : words)
			if(wd.find(pref) < 1) // check if first occurrence of sub-string in the specified string
				count++;
		return count;
	}
 
