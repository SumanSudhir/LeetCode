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
    int output = 0;
    void dfs(TreeNode* node, int s, unordered_map<int,int> m, int sum){
        if(node == NULL) return;
        s +=  node->val;
        output += m[s-sum];
        m[s]++;
        dfs(node->left,s,m,sum);
        dfs(node->right,s,m,sum);
    }

    int pathSum(TreeNode* root, int sum) {
        dfs(root,0,unordered_map<int,int>{{0,1}},sum);
        return output;
    }
};
