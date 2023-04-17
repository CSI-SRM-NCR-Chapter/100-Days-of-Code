
class Solution {
public:
    string smallestNumber(string pattern) {
        int n =pattern.length()+1;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i] = i+1;
        }
        for(int i=0;i<pattern.length();i++){
            int t=i;
            while(t<n && pattern[t] == 'D'){
                t++;
            }
            int left =i ;
            int right = t;
            while(left<right){
                int temp = ans[left];
                ans[left]=ans[right];
                ans[right]=temp;
                left++;
                right--;
            }
            if(t!=i){
                i=t-1;
            }
    }
    string result;
    for(int i=0;i<n;i++){
        result+=to_string(ans[i]);
    }
    return result;
    }
};