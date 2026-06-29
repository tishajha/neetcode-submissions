class Solution {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<List<Integer>> result= new ArrayList<>();
        List<Integer> curr= new ArrayList<>();
        Arrays.sort(candidates);
        dfs(candidates, target, 0, curr, result);
        return result;

    }
    public void dfs(int[] nums, int target,int i, List<Integer> curr,List<List<Integer>> res ){
        if(target==0){
                res.add(new ArrayList<>(curr));
                return;
        }
        if(target<0){
                return ;
        }
        for(int j=i; j<nums.length;j++){
                if (j>i && nums[j] == nums[j - 1]) {
                        continue;
                }
                if (nums[j]>target){
                        break;
                }
                curr.add(nums[j]);
                dfs(nums, target-nums[j], j+1, curr, res);
                curr.remove(curr.size()-1);
        }
        
       
    }
}
