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
    bool isReflection(TreeNode* t_left, TreeNode* t_right){
        if(t_left == NULL && t_right == NULL) return true;
        if(t_left == NULL || t_right == NULL) return false;

        return (t_left->val == t_right->val) && isReflection(t_left->left, t_right->right) && isReflection(t_left->right, t_right->left);
    }


    bool isSymmetric(TreeNode* root) {
        return isReflection(root, root);
    }
};
