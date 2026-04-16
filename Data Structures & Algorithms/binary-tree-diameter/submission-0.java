/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

class Solution {
   public int diameterOfBinaryTree(TreeNode root) {
        int[] res = new int[1];  // stores max diameter found
        dia(root, res);
        return res[0];
    }

    public int dia(TreeNode root , int[] res){
        if (root == null) {
            return 0;
        }

        int lHeight = dia(root.left, res);
        int rHeight = dia(root.right, res);

        // Update the result with current diameter at this node
        res[0] = Math.max(res[0], lHeight + rHeight);

        return 1 + Math.max(lHeight, rHeight);
    }
}
