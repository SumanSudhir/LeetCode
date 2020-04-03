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
    bool isValidBST(TreeNode* root) {
        if(root == NULL) return true;
        vector<int> v = inorderTraversal(root);
        for(int i=0;i<v.size()-1;i++){
            if(v[i] >= v[i+1]) return false;
        }
        return true;
    }

    void inorderTraversalMain(TreeNode* root, vector<int>& output){
        if(!root) return;

        inorderTraversalMain(root->left, output);
        output.push_back(root->val);
        inorderTraversalMain(root->right, output);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> output;
        inorderTraversalMain(root, output);
        return output;
    }
};
