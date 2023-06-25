class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int temp = 0;
        for(auto x: derived)
            temp ^= x;
        
        if(temp == 0) return 1;
        else return 0;
    }
};
