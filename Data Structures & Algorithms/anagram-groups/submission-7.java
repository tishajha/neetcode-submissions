class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String, List<String>> mp = new HashMap<>();
                if (strs== null || strs.length==0){
            return new ArrayList<>();
        }
        for(String s: strs){
            char[] arr=s.toCharArray();
            Arrays.sort(arr);
            String temp= new String (arr);
            if(!mp.containsKey(temp)){
                mp.put(temp,new ArrayList<>());
            }
            mp.get(temp).add(s);
        }
        return new ArrayList<>(mp.values());
    }
}

