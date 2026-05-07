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
    void graph(TreeNode* root, string str, vector<string> &ans){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            str+=to_string(root->val);
            ans.push_back(str);
            return;
        }
        str+=to_string(root->val);
        str+="->";
        graph(root->left, str, ans);
        graph(root->right, str, ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(root == NULL) return res;
        string str ="";
        graph(root, str, res );
        return res;
    }
};