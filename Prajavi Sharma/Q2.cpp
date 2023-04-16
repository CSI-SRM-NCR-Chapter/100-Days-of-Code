class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        queue<char>q;
        int n=ransomNote.size();
        int m=magazine.size();
        int j=0;
        int cnt=0;
        sort(magazine.begin(),magazine.end());
        sort(ransomNote.begin(),ransomNote.end());
        for(int i=0;i<m;i++){
            q.push(magazine[i]);
        }
        while(!q.empty()){
            if(ransomNote[j]==q.front()){
                q.pop();
                j++;
                cnt++;
            }
            else{
                q.pop();
            }
            
        }   
    if(cnt==n) return true;
    else return false;
    }
};
