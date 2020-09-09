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
    int minDepth(TreeNode* root) {

        if(root == NULL) return 0;

        queue<TreeNode*> node;
        queue<int> lvl;

        node.push(root);
        lvl.push(1);

        while(!node.empty()){
            TreeNode* c_node = node.front();
            int c_lvl = lvl.front();

            if(c_node->left == NULL && c_node->right == NULL) return c_lvl;
            if(c_node->left != NULL){
                node.push(c_node->left);
                lvl.push(c_lvl+1);
            }
            if(c_node->right != NULL){
                node.push(c_node->right);
                lvl.push(c_lvl+1);
            }

            node.pop();
            lvl.pop();
        }

        return 0;
    }
};
