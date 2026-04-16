class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashSet<Character> set = new HashSet<>();
        int count=0;
        int maxlen=0;
        for (int i=0; i<s.length(); i++){
            char c= s.charAt(i);
            while(set.contains(c)){
                set.remove(s.charAt(count));
                count++;
            }
            set.add(s.charAt(i));
            maxlen= Math.max(maxlen, i - count + 1);
        }
        return maxlen;
    }
}
