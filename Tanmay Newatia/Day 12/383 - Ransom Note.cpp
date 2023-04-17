class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26] = {0};
        for(char i:magazine){
            count[i - 'a']++;
        }
        for(char i:ransomNote){
            if(--count[i - 'a']<0){
                return 0;
            }
        }
        return 1;
    }
};

/*class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp;
        for(char i:magazine){
            mp[i]++;
        }
        for(char i:ransomNote){
            if(--mp[i]<0){
                return 0;
            }
        }
        return 1;
    }
};*/