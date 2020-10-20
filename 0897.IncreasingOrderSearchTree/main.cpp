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

    vector<int> value;
    void inorder(TreeNode* root){
        if(root==NULL) return;

        inorder(root->left);
        value.push_back(root->val);
        inorder(root->right);
    }

    TreeNode* increasingBST(TreeNode* root) {

        inorder(root);

        TreeNode* new_head =  new TreeNode(value[0]);
        TreeNode* temp = new_head;

        for(int i=1;i<value.size();i++){
            temp->right =  new TreeNode(value[i]);
            temp = temp->right;
        }

        return new_head;

    }
};
