class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int n=digits.size();
        int c=0;
        
        if(digits[n-1]==9){
            c=1;
            ans.push_back(0);
        }
        else{
            ans.push_back(digits[n-1]+1);
        }
        for(int i=n-2;i>=0;i--){
            if(c==1 && digits[i]==9){
                ans.push_back(0);
                c=1;
            }
            else if(c==1 && digits[i]<9){
                ans.push_back(digits[i]+1);
                c=0;
            }
            
            else{
                ans.push_back(digits[i]);
            }
        }
        if(c==1 && digits[0]==9){
            ans.push_back(1);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
