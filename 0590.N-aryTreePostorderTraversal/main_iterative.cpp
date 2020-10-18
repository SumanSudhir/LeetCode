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

    vector<int> postorder(Node* root) {

        vector<int> out;
        if(root == NULL) return out;

        stack<Node*> stk;
        stk.push(root);

        while(!stk.empty()){
            Node* temp = stk.top();
            stk.pop();
            for(auto i: temp->children) stk.push(i);
            out.push_back(temp->val);
        }

        reverse(out.begin(),out.end());

        return out;
    }
};
