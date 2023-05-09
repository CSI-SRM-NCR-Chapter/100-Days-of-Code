class Solution {
    public int numJewelsInStones(String jw, String s) {
        int sum= 0;
        for(int i = 0;i<jw.length();i++)
        for(int j = 0;j<s.length();j++)
        if(jw.charAt(i)==s.charAt(j))sum++;
        return sum;
    }
}