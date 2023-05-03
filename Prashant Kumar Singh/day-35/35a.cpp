class Solution {
public:
    int candy(vector<int>& ratings) {

        vector<int> temp1(ratings.size(),1);
        vector<int> temp2(ratings.size(),1);

        for(int i=1; i<ratings.size(); i++){
            if(ratings[i] > ratings[i-1]) temp1[i] = temp1[i-1] + 1;
        }

        for(int i=ratings.size()-2; i>=0; i--){
            if(ratings[i] > ratings[i+1]) temp2[i] = temp2[i+1] + 1;
        }
        
        int candy=0;
        for(int i=0; i<ratings.size(); i++){
            candy += max(temp1[i], temp2[i]);
        }

        return candy;
    }
};
