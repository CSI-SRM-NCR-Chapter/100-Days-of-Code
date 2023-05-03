class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        long int a=0, b=0;
        for(int i=0; i<gas.size(); i++){
            a=a+gas[i];
            b=b+cost[i];
        }
        if(a<b) return -1;

        int temp=0;
        long int newTank=0;
        for(int j=0; j<gas.size(); j++){
            newTank=newTank+gas[j]-cost[j];
            if(newTank<0){
                newTank=0;
                temp=j+1;
            }
        }
        return temp;
    }
};
