class Solution {
    public List<List<Integer>> combinationSum(int[] nums, int target) {
        List<List<Integer>> res= new ArrayList<>();
        List<Integer> curr= new ArrayList<>();
        dfs(nums, target, 0, curr, res);
        return res;
    }

    public void dfs(int[]nums, int target, int i, List<Integer>curr, List<List<Integer>>res){
        if(target==0){
                res.add(new ArrayList<>(curr));
                return ;
        }
        if(target<0||i>=nums.length){
                return ;
        }
        curr.add(nums[i]);
        dfs(nums, target-nums[i], i, curr,res);
        curr.remove(curr.size()-1);
        dfs(nums, target, i+1, curr,res);
    }


}
