class Solution {
    public int hammingDistance(int x, int y) {int t =31;int c = 0;
        int xrr [] = new int [31];
    int yrr [] = new int [31];
        while(x>0)
        if(x%2==0)
        {
            xrr[--t]=0;
            x/=2;
        } 
        else
        {
            xrr[--t]=1;
            x/=2;
        }
        t=31;
        while(y>0)
        if(y%2==0)
        {
            yrr[--t]=0;
            y/=2;
        } 
        else
        {
            yrr[--t]=1;
            y/=2;
        }t=31;
        while(t>0)
        if(xrr[--t]!=yrr[t])
        c++;
        return c;
    }
}