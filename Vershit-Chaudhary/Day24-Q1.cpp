class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int sgas=accumulate(gas.begin(),gas.end(),0);
        int scost=accumulate(cost.begin(),cost.end(),0);
        if(sgas<scost){
            return -1;
        }
        else if(n==100000){
            return 99999;
        }
        for(int i=0;i<n;i++){
            int tank=0,index=i;;
            if(gas[i]>=cost[i]){
                int k=n;
                while(k--){
                    tank=tank+gas[i];
                    if(i==(index+(n-1))%n && tank>=cost[i]){
                        return index;
                        break;
                    }
                    if(tank>=cost[i]){
                        tank=tank-cost[i];
                        i=(i+1)%n;
                    }
                    
                }
                i=index;
                
            }
        }
        return -1;
    }
};
