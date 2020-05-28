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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> output;
        queue<TreeNode*> q;
        if(root==NULL) return output;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            vector<int> temp;
            for(int i=0;i<n;i++){
                TreeNode* c_node = q.front();
                if(c_node->left != NULL) q.push(c_node->left);
                if(c_node->right != NULL) q.push(c_node->right);

                temp.push_back(c_node->val);
                q.pop();
            }
            output.push_back(temp);
        }
        reverse(output.begin(), output.end());

        return output;
    }
};
