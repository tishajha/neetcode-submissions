class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap <String , List<String>> map = new HashMap<>();
        if (strs== null || strs.length==0){
            return new ArrayList<>();
        }
        for (String word:strs ){
            char[] mid= word.toCharArray();
            Arrays.sort(mid);
            String split= new String (mid);
            if (!map.containsKey(split)){
                map.put(split, new ArrayList<>());
            }
            map.get(split).add(word);
        }
       return new ArrayList<>(map.values());

    }
}
 