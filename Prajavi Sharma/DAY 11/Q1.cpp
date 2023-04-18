class Solution {
public:
    int hammingDistance(int x, int y) {
        vector<int>x1(32);
        vector<int>y1(32);
       
        int i=0;
        int j=0;
        int cnt=0;
        if(x==0 && y==0){
            return 0;
        }
        while(x!=0){
            x1[i]=x%2;
            x=x/2;
            i++;
        }
        while(y!=0){
            y1[j]=y%2;
            y=y/2;
            j++;
        }
        int n=min(x1.size(),y1.size());
        
        for(int i=0;i<n;i++){
            if(x1[i]!=y1[i]){
                cnt++;
            }
        }
        return cnt;
    }
};
