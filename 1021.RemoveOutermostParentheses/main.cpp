class Solution {
public:
    string removeOuterParentheses(string S) {

        string out = "";
        int opened = 0;

        for(char c : S){
            if(c == '(' && opened++ > 0) out += c;
            if(c == ')' && opened-- > 1) out += c;
        }

        return out;
    }
};
