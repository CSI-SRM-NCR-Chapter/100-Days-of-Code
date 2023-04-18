class Solution
{
    public int lengthOfLastWord(String s)
    {
        s=s.trim();int i;
        for(i = s.length()-1;i>=0;i--)
            if(s.charAt(i)==' ')
                break;
        return (s.length()-1-i);
    
    }  
}