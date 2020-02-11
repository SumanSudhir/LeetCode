class Solution {
public:
    bool isValid(string s) {
        stack<int> store;

        for(int i=0;i<s.length();i++){
            if((s[i] == '(') || (s[i] == '{')|| (s[i] == '[')) store.push(s[i]);
            else if((s[i] == ')') || (s[i] == '}')|| (s[i] == ']')){
                char temp;
                if(s[i] == ')') temp = '(';
                if(s[i] == '}') temp = '{';
                if(s[i] == ']') temp = '[';
                if(store.empty()) return false;
                else if(temp != store.top()) return false;
                else store.pop();
            }
        }
        if(store.empty()){
            return true;
        }
        return false;
    }
};
