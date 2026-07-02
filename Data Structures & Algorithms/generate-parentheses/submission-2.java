class Solution {
    List<String> result;
    public List<String> generateParenthesis(int n) {
        StringBuilder s= new StringBuilder ();
        result= new ArrayList<>();
        backtracking(0,0,n,s );
        return result;
    }
    public void backtracking(int o, int c, int n, StringBuilder s)
    {
        if(s.length()==2*n){
            result.add(s.toString());
        }
        if(o<n){
            s.append('(');
            backtracking(o+1,c,n,s);
            s.deleteCharAt(s.length()-1);
        }
        if(c<o){
            s.append(')');
            backtracking(o,c+1,n,s);
            s.deleteCharAt(s.length()-1);
        }
    }
}
