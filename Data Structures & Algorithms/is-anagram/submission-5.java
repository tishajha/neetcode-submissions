class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!= t.length())
            return false;
        
        char[] sint =s.toCharArray();
        char[] tint = t.toCharArray();
        Arrays.sort(sint);
        Arrays.sort(tint);
        return Arrays.equals(sint,tint);
    }
}
