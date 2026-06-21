class Solution {
    public boolean isValid(String s) {
        HashMap<Character, Character> mp= new HashMap<>();
        mp.put('}','{');
        mp.put(')','(');
        mp.put(']','[');
        Stack<Character> st= new Stack<>();
         for(Character c:s.toCharArray()){
            if (mp.containsKey(c)){
                if(!st.isEmpty()&& st.peek()==mp.get(c)){
                    st.pop();
                }
                else
                    return false;

            }
            else {
                st.push(c);
            }
            
         }
         return st.isEmpty();
    }
}
