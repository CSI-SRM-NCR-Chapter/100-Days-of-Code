class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        long sum1 = 0 , sum2 = 0;
        for( int i = 0; i< gas.size(); i++){
            sum1 += gas[i];
            sum2 += cost[i];
        }
        if(sum1< sum2) return -1;
        int startIndex = 0;
        long totalSum = 0;
        for(int i = 0; i < gas.size(); i++){
            totalSum += gas[i]-cost[i];
            if(totalSum < 0){
                totalSum = 0;
                startIndex = i+1;
            }
        }
        return startIndex;
    }
};