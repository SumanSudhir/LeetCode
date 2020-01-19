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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        queue<TreeNode*> q;
        int count = 1;

        while(count>0){
            q.push(root);
            count--;
            while(!q.empty()){
                TreeNode* current = q.front();
                if(current->left != NULL){
                    if(current->left->val == target && current->left->left == NULL && current->left->right == NULL){
                        current->left = NULL;
                        count = 1;
                    }
                    else{
                    q.push(current->left);
                    }
                }
                if(current->right != NULL){
                    if(current->right->val == target && current->right->left == NULL && current->right->right == NULL){
                        current->right = NULL;
                        count = 1;
                    }
                    else{
                    q.push(current->right);
                    }
                }
                q.pop();
            }

        }
        if(root->val == target && root->right == NULL && root->left == NULL){
            root = NULL;
        }
        return root;
    }
};
