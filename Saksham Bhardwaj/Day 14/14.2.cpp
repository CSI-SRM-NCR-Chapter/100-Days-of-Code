class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        
        vector<vector<int>> queue ;
        vector<int> k {-1,-1};
        for (int i=0; i<people.size(); i++){
            queue.push_back(k);
        }
        
        sort(people.begin(), people.end());
        
        for (int ij =0 ; ij < people.size(); ij++){
            int i = people[ij][0];
            int j = people[ij][1];
            
            int greater_ele = 0;
            int place_pos = 0;
                        
            while (greater_ele < j){
                if (queue[ place_pos ][0] >= i || queue[ place_pos ][0] == -1){
                    place_pos++;
                    greater_ele++;
                }
                else{
                    place_pos++;
                }
            }
            
            while (queue[place_pos][0] != -1){
                place_pos++;
            }
            
            k.clear();
            k.push_back(i);
            k.push_back(j);
            queue[ place_pos ] = k;
        }
        return queue;
        
    }
};
