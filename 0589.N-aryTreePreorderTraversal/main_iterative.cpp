class Solution {
public:

    vector<int> preorder(Node* root) {
        vector<int> out;
        if(root == NULL) return out;
        stack<Node*> stk;
        stk.push(root);

        while(!stk.empty()){
            Node* temp = stk.top();
            stk.pop();

            for(int i=temp->children.size()-1;i>=0;i--) stk.push(temp->children[i]);

            out.push_back(temp->val);
        }

        return out;
    }
};
