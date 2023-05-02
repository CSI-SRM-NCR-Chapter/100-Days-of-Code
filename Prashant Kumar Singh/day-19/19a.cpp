class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        vector<int> ans;

        int n = digits.size();

        int sum = 1;

        int i = n-1;

        while(i >= 0){
            
            if(sum + digits[i] > 9){

                ans.push_back((sum + digits[i]) % 10);

                sum = 1;

            }
            
            else{

                ans.push_back(sum + digits[i]);

                sum=0;
            }

            i--;

        }

        if(sum == 1){

            ans.push_back(1);

        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
        
        return digits;
    }

};
