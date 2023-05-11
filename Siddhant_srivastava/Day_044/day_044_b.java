class Solution {
    public int findComplement(int num) {
        int x=0,i=0;
        while(num>0)
        {
            if(num%2==0)
            x+=Math.pow(2,i);
            num/=2;
            i++;
        }
        return x;
    }
}