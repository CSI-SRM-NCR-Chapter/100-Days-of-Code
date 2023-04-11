class Solution {
    List<List<String>> result = new ArrayList<>();
    public List<List<String>> partition(String s) {
        findPalindrome(s, new ArrayList<>());
        return result;
    }
    
    public void findPalindrome(String s, List<String> pals) {
        if(s.length() == 0) {
            result.add(new ArrayList<>(pals));
            return;
        }
        
        for(int i = 0; i < s.length(); i++) {
            String sub = s.substring(0,i+1);
            String rest = s.substring(i+1);
            if(checkPalindrome(sub)) {
                pals.add(sub);
                findPalindrome(rest,pals);
                pals.remove(pals.size() - 1);
            }
        }
    }

    
    public boolean checkPalindrome(String s) {
        int i = 0;
        int j = s.length() - 1;
        while(i <= j) {
            if(s.charAt(i) != s.charAt(j))
                return false;
            i++;
            j--;
        }
        return true;
    }
    
}