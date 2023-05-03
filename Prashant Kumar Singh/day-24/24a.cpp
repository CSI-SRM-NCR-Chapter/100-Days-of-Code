class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum1 = 0, sum2 = 0, i, j;

        for(i=0; i<gas.size(); i++){
            sum1 += gas[i];
            sum2 += cost[i];
        }

        if(sum1 < sum2) return -1;

        i = 0;
        j = 0;
        int fuel = 0;

        while(i<gas.size() && j<cost.size()){
            fuel += gas[i] - cost[i];
            if(fuel < 0){
                fuel = 0;
                j=i+1;
            }
            i++;            
        }
        
        return j;
    }
};
