class Solution {
    public String longestCommonPrefix(String[] strs) {
    if (strs == null || strs.length == 0)
        return "";
    
    Arrays.sort(strs);
    String str1 = strs[0];
    String last = strs[strs.length - 1];
    int c = 0;
    while(c < str1.length())
    {
        if (str1.charAt(c) == last.charAt(c))
            c++;
        else
            break;
    }if(c==0)
    return "";
    else
    return  str1.substring(0, c);
    
}
}