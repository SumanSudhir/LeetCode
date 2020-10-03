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
int output = 0;
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        output = 0;
        dfs(root,L,R);
        return output;
    }

    void dfs(TreeNode* node, int L, int R) {
        if(node != NULL){
            if(L <= node->val && node->val <= R) output += node->val;
            if(L < node->val) dfs(node->left,L,R);
            if(node->val < R) dfs(node->right,L,R);
        }
    }
};
