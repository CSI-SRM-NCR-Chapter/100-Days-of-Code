class Solution {
public:
    string reverseWords(string s) {
        vector<string> a;
        stringstream ss(s);
        string temp;
        while(ss>>temp){
            a.push_back(temp);
        }
        int i = 0, j= a.size()-1;
        while(i<j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++; j--;
        }
        temp ="";
        j= a.size();
        for(int i = 0; i<j ; i++){
            temp+=a[i];
            if(i == j-1){
                break;
            }
            temp+=" ";
        }
        return temp;
    }
};
