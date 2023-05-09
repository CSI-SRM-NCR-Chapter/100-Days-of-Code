class Solution {
    public String minWindow(String s, String t) {
        Map<Character, Integer> map=new HashMap();
        for(int i=0;i<t.length();i++){
            Character c=t.charAt(i);
            map.put(c, map.getOrDefault(c,0)+1);
        }
        int l=0;
        int matched=map.size();
        int minSize=Integer.MAX_VALUE;
        int startIndex=0;
        for(int r=0;r<s.length();r++){
            Character rChar=s.charAt(r);
            if(map.containsKey(rChar)){
                map.put(rChar, map.get(rChar)-1);
                if(map.get(rChar)==0) matched--;
            }
            while(l<=r && matched==0){
                if(minSize>r-l+1){
                    minSize=r-l+1;
                    startIndex=l;
                }
                Character lChar=s.charAt(l);
                if(map.containsKey(lChar)){
                    map.put(lChar, map.get(lChar)+1);
                    if(map.get(lChar)>0) matched++;
                }
                l++;
            }
        }
        return minSize==Integer.MAX_VALUE ? "" : s.substring(startIndex, startIndex+minSize);
    }
}
