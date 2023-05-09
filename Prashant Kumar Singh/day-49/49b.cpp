class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r1=0, r2=n-1, c1=0, c2=n-1, k=1;
        vector<vector<int>> res(n,vector<int>(n)) ;
        while(r1<=r2 && c1<=c2){
            for(int i=c1; i<=c2; i++)res[r1][i]=k++;r1++;
            for(int i=r1; i<=r2; i++)res[i][c2]=k++;c2--;
            for(int i=c2; i>=c1; i--)res[r2][i]=k++;r2--;
            for(int i=r2; i>=r1; i--)res[i][c1]=k++;c1++;
        }
        return res ;
    }
};
