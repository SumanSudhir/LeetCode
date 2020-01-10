/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root == NULL){
            return;
        }

        TreeNode* tree = new TreeNode(root->val);
        tree->right = root->left;
        tree->right->val = root->left->val;
        flatten(root->left);
        flatten(root->right);
        root = tree;
    }
};
