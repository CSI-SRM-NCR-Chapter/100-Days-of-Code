class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n = plants.size();
        int steps = 0;
        int amtleft = capacity;

        for (int i=0; i<n; i++) {
            if (plants[i] <= amtleft) {
                steps++;
                amtleft -= plants[i];
            }
            else {
                steps += (i+1)*2 - 1;
                amtleft = capacity - plants[i];
            }
        }

        return steps;
    }
};
