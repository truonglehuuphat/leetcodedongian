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
    public int minDepth(TreeNode root) {
        if(root == null) {return 0;}
        int leftHeigth = minDepth(root.left);
        int rightHeigth = minDepth(root.right);
        if(root.left == null && root.right == null) return 1;
        if(root.left == null){
            return rightHeigth + 1;
        }
        if(root.right == null){
            return leftHeigth + 1;
        }
        
        return Math.min(leftHeigth, rightHeigth) + 1;

    }
}