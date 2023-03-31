class Solution {
public:
    string reverseWords(string s) {
        string res="";
        int n = s.size();
        for(unsigned int i=0;i<n; i++)
        {
            while(i<n && s[i]==' ') i++;
            string tmp = ""; bool f = 0;
            while(i<n && s[i]!=' ')
            {
                tmp = tmp+s[i++];
                f = 1;
            }
            if(res.empty() && f) res = res+tmp;
            else if(f) res = tmp + " " + res;
            //cout<<res<<endl;
        }
        return res;
    }
};  // Day 8.1

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        while(i<j)
        {
            if(numbers[i]+numbers[j]==target) return {i+1,j+1};
            if(numbers[i]+numbers[j]>target) j--;
            else i++;
        }
        return {i,j};
    }
};  // Day 8.2