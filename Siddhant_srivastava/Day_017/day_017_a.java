class Solution {
    int firstUniqChar(String s)
    {
        int i = -1;
        while(++i<s.length())
            if( s.indexOf( s.charAt (i) )==s.lastIndexOf( s.charAt (i) ) ) 
                return  s.indexOf(s.charAt(i));
        return -1;
    }
}