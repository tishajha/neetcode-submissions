class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);  // 🔥 Required for two-pointer and duplicate handling
        int n = nums.length;
        List<List<Integer>> result = new ArrayList<>();

        for (int i = 0; i < n - 2; i++) {
            // 🔥 Skip duplicate elements for i
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int target = -nums[i];
            int s = i + 1;
            int e = n - 1;

            while (s < e) {
                int sum = nums[s] + nums[e];
                if (sum == target) {
                    result.add(Arrays.asList(nums[i], nums[s], nums[e]));

                    // 🔥 Skip duplicate elements at s and e
                    while (s < e && nums[s] == nums[s + 1]) s++;
                    while (s < e && nums[e] == nums[e - 1]) e--;

                    s++;
                    e--;
                } else if (sum > target) {
                    e--;
                } else {
                    s++;
                }
            }
        }

        return result;
    }
}


 