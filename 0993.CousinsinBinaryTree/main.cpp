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
    bool isCousins(TreeNode* root, int x, int y) {

        queue<pair<TreeNode*,int>> q;

        vector<vector<int>> track_x;
        vector<vector<int>> track_y;

        q.push({root,-1});
        int par_no = 0;

        while(!q.empty()){

            int n = q.size();
            vector<int> track_x;
            vector<int> track_y;

            for(int i=0;i<n;i++){
                auto c_node = q.front();

                if(c_node.first->left != NULL){
                    q.push({c_node.first->left, par_no+1});
                }
                if(c_node.first->right != NULL){
                    q.push({c_node.first->right, par_no+1});
                }

                if(c_node.first->val == x) track_x.push_back(c_node.second);
                else if(c_node.first->val == y) track_y.push_back(c_node.second);

                par_no++;
                q.pop();
            }

            for(int i=0;i<track_x.size();i++){
                for(int j=0;j<track_y.size();j++){
                    if(track_x[i] != track_y[j]) return true;
                }
            }

        }


        return false;
    }
};
