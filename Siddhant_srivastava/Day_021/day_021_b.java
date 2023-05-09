class Solution {
    public String[] findWords(String[] words) {
        ArrayList<String> list = new ArrayList<>();
        for(String str1 : words)
        { 
            String str=str1.toLowerCase();
            String R1="qwertyuiop";
            String R2="asdfghjkl";
            String R3="zxcvbnm";
            int r1=0,r2=0,r3=0;
            for(int i = 0;i<str.length();i++)
                if(R1.contains(String.valueOf( str.charAt (i) ) ) )
                r1++;
                else if(R2.contains(String.valueOf( str.charAt (i) ) ) )
                r2++;
                else 
                r3++;
            if(r1==str.length() || r2==str.length() || r3==str.length())
            list.add(str1);
        }
        String ans[] = new String[list.size()];
        list.toArray(ans);
        return ans;
    }
}