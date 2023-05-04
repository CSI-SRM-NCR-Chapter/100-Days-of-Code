class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> sp;
        map<char,int> tp;
        for(auto a:s){
            sp[a]++;
        }
        for(auto a:t){
            tp[a]++;
        }
        return sp==tp;
    }
};


/*class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> sv;
        vector<char> tv;
        for(auto a:s){
            sv.push_back(a);
        }
        for(auto a:t){
            tv.push_back(a);
        }
        sort(sv.begin(),sv.end());
        sort(tv.begin(),tv.end());
        return sv==tv;
    }
};*/