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
// public:
    void inorderTraversalMain(TreeNode* root, vector<int>& output){
        if(!root) return;

        inorderTraversalMain(root->left, output);
        output.push_back(root->val);
        inorderTraversalMain(root->right, output);
    }

public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> output;
        inorderTraversalMain(root, output);
        return output;
    }
};
