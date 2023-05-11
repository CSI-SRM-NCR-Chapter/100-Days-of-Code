class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int>ans;
        int i=0;
        int m=matrix.size();
        int n=matrix[0].size();
        int dir=1;
        int colstart=0,colend=n-1,rowstart=0,rowend=m-1;
        while(rowstart<=rowend && colstart<=colend){
            
            if(dir==1){
                for(int i=colstart;i<=colend;i++){
                ans.push_back(matrix[rowstart][i]);
                

            }
                rowstart++;
                dir=2;

            }
            else if(dir==2){
                for(int i=rowstart;i<=rowend;i++){
                ans.push_back(matrix[i][colend]);
                

            }
                colend--;
                dir=3;

            }
            
            
           else  if(dir==3){
                
                
                for(int i=colend;i>=colstart;i--){
                    
                    
                   ans.push_back(matrix[rowend][i]);
                   

                }
                rowend--;
                dir=4;
                
            }
           else  if(dir==4){
                for(int i=rowend;i>=rowstart;i--){
                     ans.push_back(matrix[i][colstart]);
                     

            }
                colstart++;
                dir=1;

            }

            

        }
        return ans;

    }
     
};
