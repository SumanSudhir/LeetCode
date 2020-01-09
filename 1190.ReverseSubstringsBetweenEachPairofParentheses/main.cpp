class Solution {
public:
    string reverseParentheses(string s) {
        string output;
        stack<int>index_open;
        int count = 0;
        char temp;

        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                index_open.push(i-count);
                count++;
            }
            else if(s[i] == ')'){
                count++;
                int start = index_open.top();
                index_open.pop();
                int end  = i - count;
                for(int i=start;i<(start + end + 1)/2;i++){
                    temp = output[i];
                    output[i] = output[end + start - i];
                    output[end + start - i] = temp;
                }
            }
            else{
                output.push_back(s[i]);
            }
        }

        return output;
    }
};
