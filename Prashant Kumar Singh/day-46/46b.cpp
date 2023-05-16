class Solution {
public:
    int minDeletionSize(vector<string>& strs) {

        int n = strs.size();     // number of rows
        int m = strs[0].size();  // number of columns

        // count columns to be deleted
        int columns = 0 ;

        for(int i=0;i<m;i++){

            for(int j=1;j<n;j++){

                char currColChar = strs[j][i];        // character of current column
                char previousColChar = strs[j-1][i];  // character of previous column

                // check sorted or not
                if(currColChar < previousColChar){
                    columns++;
                    break;
                }

            }
        }

        // return number of columns to be deleted
        return columns;
    }
};
