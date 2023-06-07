class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left; i<=right; i++){
            int num = i;
            bool check = true;
            while(num>0){
                int res = num%10; 
                if(res==0) {
                    check = false;
                    break;
                }
                if(i%res!=0){
                    check = false;
                    break;
                }
                num = num/10;
                if(num==0) break;
            }
            if(check){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
