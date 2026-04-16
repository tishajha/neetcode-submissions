class Solution {

    public String encode(List<String> strs) {
        StringBuilder encoded = new StringBuilder();
        for (String s:strs){
            encoded.append(s);
            encoded.append("`");
        }
        return encoded.toString();
    }

    public List<String> decode(String str) {
        List<String> result = new ArrayList<>();
        int i=0;
        while (i< str.length()){
            int j=i;
            while (str.charAt(j) != '`'){
                j++;
            }
            result.add(str.substring(i,j));
            j++;
            i=j;
        }
        return result;
    }
}
