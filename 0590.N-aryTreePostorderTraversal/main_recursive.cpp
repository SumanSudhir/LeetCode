class Solution {
public:
    vector<int> out;
    void helper(Node* root){
        if(root == NULL) return;

        for(auto i: root->children) helper(i);
        out.push_back(root->val);
    }

    vector<int> postorder(Node* root) {

        helper(root);
        return out;
    }
};
