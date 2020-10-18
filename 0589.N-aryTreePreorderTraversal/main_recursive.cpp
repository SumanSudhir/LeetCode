/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> out;

    void helper(Node* root){

        if(root == NULL) return;
        out.push_back(root->val);
        for(auto i: root->children) helper(i);

    }

    vector<int> preorder(Node* root) {

        helper(root);

        return out;
    }
};
