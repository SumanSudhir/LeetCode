class Solution {
public:
    string reverseParentheses(string s) {
        string output;
        queue<int>index;
        int count = 1;

        for(int i=0;i<s.length();i++){
            if((s[i] == '(') || (s[i] == ')')){
                index.push(i);
            }
            else{
                output.push_back(s[i]); 
            }
        }

        while(true){
            int start = index.front();
            index.pop();
            if(index.empty()){
                break;
            }
            int close = index.front();

            if(count%2 != 0){
                for(int i=start+1; i<close; i++){
                    output[i-count] = s[close + start - i];
                }                               
            }

            count++;
        }

        return output;
    }
};