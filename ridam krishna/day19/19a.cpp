class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        for(int i=digits.size()-1; i>=0; i--){
            res.push_back(digits[i]);
        }
        // if(res[0]!=9) res[0]=res[0]+1;

        int n=digits.size()+1;
        int j=0;
        while(n--){
            if(res.size()==j){
                if(res[j]==9){
                res[j]=0;
                j++;
                res.push_back(1);
            }
            }
            if(res[j]==9){
                res[j]=0;
                j++;
                if(j==res.size()){
                    res.push_back(1);
                    break;
                }
            }
            if(res[j]<9){
                if(res[j]+1<=9){
                    res[j]=res[j]+1;
                    break;
                }
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
