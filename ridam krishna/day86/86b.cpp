class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int x=0;
        for(auto y: derived) x=x^y;
        if(x==0) return true;
        return false;
    }
};
