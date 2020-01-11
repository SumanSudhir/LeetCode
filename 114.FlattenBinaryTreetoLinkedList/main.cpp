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

        while(root != NULL){
            if(root->left != NULL && root->right != NULL){
                TreeNode* temp = root->left;
                while(temp->right != NULL){
                    temp = temp->right;
                }
                temp->right = root->right;              //Find the right most leaf of root's left
                                                        // and set leaf's right = root's right
            }

            if(root->left != NULL){                     //Set root's right = root's left if
                root->right = root->left;               // root's left exists
            }

            root->left = NULL;
            root = root->right;                         //Move the root's left branch, if no left
        }                                                //branch exists, then move root' right branch
    }
};
