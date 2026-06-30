class Solution {
    List<List<Integer>> res;

    public List<List<Integer>> permute(int[] nums) {
        res=new ArrayList<>();
        List<Integer> set=new ArrayList<>();
        boolean[] visited= new boolean[nums.length];
        dfs(nums, visited,set);
        return res;
    }

    public void dfs(int[]nums, boolean[] visited, List<Integer>set){
        if(set.size()==nums.length ){
            res.add(new ArrayList<>(set));
            return;
        }
        for(int i=0;i<nums.length;i++){
            if(visited[i]){
                continue;
            }
            set.add(nums[i]);
            visited[i]=true;
            dfs(nums,visited, set);
            visited[i]=false;
            set.remove(set.size()-1);
        }
        
    }
}
