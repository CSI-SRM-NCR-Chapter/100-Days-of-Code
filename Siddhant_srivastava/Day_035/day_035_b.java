class Solution {
    public boolean checkDistances(String s, int[] dist) {
        for(int i= 0;i<s.length();i++)
        {int l = s.lastIndexOf(s.charAt(i)),f=s.indexOf(s.charAt(i));
            if(l!=-1)
            if(dist[(int)s.charAt(i)-97]!=l-f-1)
            return false;            
        }
        return true;
    }
}