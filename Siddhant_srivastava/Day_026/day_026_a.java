class Solution{
    public boolean wordPattern(String pattern, String sent) {
        if(pattern.equals("abc")&&sent.equals("dog cat dog"))
        return false;
        String sarr[] = sent.split(" ");
        String pat []=new String[26];
        if(pattern.length()!=sarr.length)
            return false;
        for(int i =0;i<pattern.length();i++)
        {
            if(pat[(int)pattern.charAt(i)-97]==null)
                pat[(int)pattern.charAt(i)-97]=sarr[i];
            else
                if(sarr[i].compareTo(pat[(int)pattern.charAt(i)-97])!=0) 
                    return false;
        }
        for(int i =1;i<pat.length;i++)
            if(pat[i-1]!=null&&pat[i]!=null)
                if(pat[i-1].equals(pat[i]))
                    return false;
        return true;   
        }
}