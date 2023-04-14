class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
    int alpha[] = new int [26];
    for(int  i =0;i<ransomNote.length();i++)
    alpha[(int)(ransomNote.charAt(i))-97]++;

    for( int i =0;i<magazine.length();i++)
    alpha[(int)(magazine.charAt(i))-97]--;
    for(int i = 0;i<26;i++)
    if(alpha[i]>0)
    return false;
        return true;
    }
}