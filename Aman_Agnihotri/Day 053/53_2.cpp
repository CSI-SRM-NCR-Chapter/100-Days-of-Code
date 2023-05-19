#include <vector>

class Solution {
public:
    int wateringPlants(std::vector<int>& p, int c) {
        int n = p.size();
        int co = 0, curr = c;
        co++;
        
        for (int i = 0; i < n - 1; i++) {  // Updated loop condition to n - 1
            curr -= p[i];
            if (curr >= p[i + 1]) {
                co++;
                continue;
            } else {
                co += 2 * (i + 1);
                curr = c;
                co++;
            }
        }
        return co;
    }
};
