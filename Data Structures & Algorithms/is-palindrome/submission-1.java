class Solution {
    public boolean isPalindrome(String s) {
        String result= "";
        for(char ch: s.toCharArray()){
            if (Character.isLetterOrDigit(ch)) {
            result += Character.toLowerCase(ch); // convert to lowercase and keep
        }
        }
        int n= result.length();
        for (int i=0;i<n/2;i++){
            if (result.charAt(i) != result.charAt(n - i - 1)) {
                return false;
            }
        }
        return true;
    }
}
