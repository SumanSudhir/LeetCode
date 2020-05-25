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
    int maxDepth(TreeNode* root) {

        if(root == NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int output = 0;

        while(!q.empty()){
            output++;
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode* q_front = q.front();
                if(q_front->left != NULL) q.push(q_front->left);
                if(q_front->right != NULL) q.push(q_front->right);
                q.pop();
            }
        }

        return output;
    }
};
