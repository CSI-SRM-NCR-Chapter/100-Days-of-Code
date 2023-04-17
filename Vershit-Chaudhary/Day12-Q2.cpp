class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        int i=0;
        for(int j=0;j<magazine.length();j++){
            if(ransomNote[i]==magazine[j]){
                i++;
            }
        }
        if(i==ransomNote.length()){
            return true;
        }
        else{
            return false;
        }
    }
};
