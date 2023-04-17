class Solution {
    public char findTheDifference(String s, String t) {int c=-1;
    if(s.length()==0)
    return t.charAt(0);
    int alpha[] = new int [26];
    for(int i =0;i<t.length();i++)
    alpha[(int)(t.charAt(i))-97]++;

    for(int i =0;i<s.length();i++)
    alpha[(int)(s.charAt(i))-97]--;
    for(int i =0;i<26;i++)
    if(alpha[i]!=0)
    c=i;
    return (char)(c+97);
    }
}