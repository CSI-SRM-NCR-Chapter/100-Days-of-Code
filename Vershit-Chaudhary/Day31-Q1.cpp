class Solution {
public:
    bool rotateString(string s, string goal) {
        int l=goal.length();
        for(int i=0;i<l;i++){
            if(s==goal){
                return true;
            }
            else{
                goal=goal+goal[0];
                goal.erase(0,1);
            }
        }
        return false;
    }
};
