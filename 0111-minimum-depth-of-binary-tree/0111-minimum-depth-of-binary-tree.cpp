/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        // if root is NULL return 0
        if(root == NULL ) return 0;
        // Initialize the depth of 2 subtrees
        int leftDepth = minDepth(root->left);
        int rightDepth = minDepth(root->right);
        // if root->left and root->right are NULL return 1
        if(root->left == NULL && root->right == NULL) return 1;
        // if root->left  is NULL rightDepth +1
        if(root->left == NULL ) {
            return rightDepth + 1;
        }
        // if root->right  is NULL leftDepth +1
        if(root->right == NULL ) {
            return leftDepth + 1;
        }
        return min(leftDepth, rightDepth)+1;
    }
};