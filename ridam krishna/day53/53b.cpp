class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n=plants.size();
        int c=capacity;
        int count=0;
        for(int i=0; i<n; i++){
            if(plants[i]<=c){
                count++;
                c-=plants[i];
            }
            else{
                count+=i;
                c=capacity;
                count+=i;
                i--;
            }
        }
        return count;
    }
};
