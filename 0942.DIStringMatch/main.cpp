class Solution {
public:
    vector<int> diStringMatch(string S) {
        int n = S.size();
        int up = 0;
        int dw = n;

        vector<int> out;
        for(char i:S){
            if(i=='I') out.push_back(up++);
            if(i=='D') out.push_back(dw--);
        }

        if(S[n-1] == 'I') out.push_back(up);
        else out.push_back(dw);

        return out;
    }
};
