class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int colstart=0,colend=n-1,rowstart=0,rowend=n-1;
        
        int a=0;
        vector<int>v;
        //vector<vector<int>>ans;
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int i=0;
        int dir=1;
        while(rowstart<=rowend && colstart<=colend){
            if(dir==1){
                for(int i=colstart;i<=colend;i++){
                    ans[rowstart][i]=++a;   
                }
                rowstart++;
                dir=2;
            }
            else if(dir==2){
                for(int i=rowstart;i<=rowend;i++){
                    ans[i][colend]=++a;
                }
                colend--;
                dir=3;
            }
            else if(dir==3){
                for(int i=colend;i>=colstart;i--){
                   
                    ans[rowend][i]=++a;
                }
                rowend--;
                dir=4;
                
            }
            else if(dir==4){
                for(int i=rowend;i>=rowstart;i--){
                    ans[i][colstart]=++a;
                }
                colstart++;
                dir=1;
            }
        }
        return ans;
        




    }
};
