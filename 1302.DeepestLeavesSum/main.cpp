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
        queue<int> q1;
        stack<TreeNode*> s;
        stack<int> s1;
        q.push(root);
        s.push(root);
        q1.push(1);
        s1.push(1);
        int sum = 0;
        int i = 1;
        while(!q.empty()){
            TreeNode* current = q.front();
            i = q1.front();
            if(current->left != NULL){
                q.push(current->left);
                s.push(current->left);
                q1.push(i+1);
                s1.push(i+1);
            }
            if(current->right != NULL){
                q.push(current->right);
                s.push(current->right);
                q1.push(i+1);
                s1.push(i+1);
            }
            q.pop();
            q1.pop();
        }
        int depth = s1.top();
        while(s1.top() == depth){
            sum = sum + s.top()->val;
            s.pop();
            s1.pop();
        }

    return sum;
    }
};
