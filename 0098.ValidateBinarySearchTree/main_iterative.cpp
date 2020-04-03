/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// Failing one test case due to some logic mistake

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(root == NULL) return true;

        queue<TreeNode*> qL;
        queue<TreeNode*> qR;

        if(root->left != NULL){
            if(root->left->val >= root->val) return false;
            else qL.push(root->left);
        }
        if(root->right != NULL){
            if(root->right->val <= root->val) return false;
            else qR.push(root->right);
        }

        while(!qL.empty() || !qR.empty()){

            if(!qL.empty()){
                TreeNode* tempL = qL.front();
                qL.pop();
                if(tempL->left != NULL){
                    if(tempL->left->val >= tempL->val || tempL->left->val >= root->val) return false;
                    else qL.push(tempL->left);
                }

                if(tempL->right != NULL){
                    if(tempL->right->val <= tempL->val || tempL->right->val >= root->val) return false;
                    else qL.push(tempL->right);
                }
            }

            if(!qR.empty()){
                TreeNode* tempR = qR.front();
                qR.pop();
                if(tempR->left != NULL){
                    if(tempR->left->val >= tempR->val || tempR->left->val <= root->val) return false;
                    else qR.push(tempR->left);
                }

                if(tempR->right != NULL){
                    if(tempR->right->val <= tempR->val || tempR->right->val <= root->val) return false;
                    else qR.push(tempR->right);
                }
            }
        }

        return true;
    }
};
