class Solution {
    public String reverseWords(String s) {
        s=s.trim()+" ";
        String str="";String word="";
        for(int i = 0;i<s.length()-1;i++)
        {if(s.charAt(i)!=' ')
            word = word +s.charAt(i);
            if(s.charAt(i)!=' '&& s.charAt(i+1)==' ')
            {str=word + " "+str;word = "";}
            

            
        }
        str=str.trim();
        return str;
    }
}