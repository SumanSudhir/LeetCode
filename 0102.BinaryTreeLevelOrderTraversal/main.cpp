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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        queue<int> lvl;
        vector<int> temp;
        vector<vector<int>> output;
        if(root==NULL) return output;
        q.push(root);
        lvl.push(0);
        int p_lvl = 0;

        while(!q.empty()){
            TreeNode* c_node = q.front();
            int c_lvl = lvl.front();
            if(c_node->left != NULL){
                q.push(c_node->left);
                lvl.push(c_lvl+1);
            }
            if(c_node->right != NULL){
                q.push(c_node->right);
                lvl.push(c_lvl+1);
            }

            if(p_lvl != c_lvl){
                output.push_back(temp);
                temp = {};
            }

            temp.push_back(c_node->val);
            p_lvl = c_lvl;
            q.pop();
            lvl.pop();

        }
        output.push_back(temp);

        return output;
    }
};
