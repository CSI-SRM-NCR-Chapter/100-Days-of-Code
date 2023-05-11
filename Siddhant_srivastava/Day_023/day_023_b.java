class Solution{
    public int romanToInt(String s) {
        int val = 0,ans = 0 ;
        for (int i = s.length()-1; i >= 0; i--) {
            switch(s.charAt(i)) {
                case 'I': val = 1; break;
                case 'V': val = 5; break;
                case 'X': val = 10; break;
                case 'L': val = 50; break;
                case 'C': val = 100; break;
                case 'D': val = 500; break;
                case 'M': val = 1000; break;
            }
            if (4 * val < ans)
                ans -= val;
            else 
            ans += val;
        }
        return ans;
    }
}