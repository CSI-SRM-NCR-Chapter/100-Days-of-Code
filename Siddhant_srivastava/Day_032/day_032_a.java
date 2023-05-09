class Solution {
    public boolean isSubsequence(String s, String t) {
      int i= 0;int max =-1;
      while(i<s.length()) 
      {
          if(t.indexOf(s.charAt (i) )>-1)
         t=t.substring(t.indexOf(s.charAt(i),max)+1);
          else
          return false;  
          i++;   
           } 
      return true;
    }
}