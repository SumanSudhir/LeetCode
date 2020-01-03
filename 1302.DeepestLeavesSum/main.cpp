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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        queue<TreeNode*> q3;
        queue<int> q1;
        queue<int> q4;
        q.push(root);
        q1.push(1);
        int sum = 0;
        int i = 1;
        while(!q.empty()){
            TreeNode* current = q.front();
            i = q1.front();
            if(current->left != NULL){
                q.push(current->left);
                q1.push(i+1);
            }
            if(current->right != NULL){
                q.push(current->right);
                q1.push(i+1);
            }
            if((current->right == NULL) && (current->left == NULL) ){
                q3.push(current);
                q4.push(q1.front());
            }

            q1.pop();
        }

        while(!q3.empty() && q4.front() == q4.back()){

                sum = sum+q3.front()->val;
                q3.pop();
                q4.pop();
        }
        return sum;
    }
};
