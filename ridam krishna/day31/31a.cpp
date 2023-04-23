class Solution {
public:
    bool rotateString(string s, string g) {
        string temp=s;
        for(int i=0; i<temp.size(); i++){
            temp=s.substr(i,s.size()) + s.substr(0,i);
            if(temp==g) return true;
            cout<<temp<<endl;
        }

        return false;
    }
};
