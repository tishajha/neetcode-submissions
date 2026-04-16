class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap <String ,List<String>>map = new HashMap<>();
        if(strs == null || strs.length ==0)
        {
            return new ArrayList<>();
        }
        for (String word:strs){
            char [] temp = word.toCharArray();
            Arrays.sort(temp);
            String tep = new String (temp);
            if(!map.containsKey(tep)){
                map.put(tep, new ArrayList<>());
            }
            map.get(tep).add(word);
        }
        return new ArrayList<>(map.values());
    }
}
