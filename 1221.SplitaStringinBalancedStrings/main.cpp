class Solution {
public:
    int balancedStringSplit(string s) {

        int n = s.size();
        int Rc = 0;
        int Lc = 0;
        int output = 0;

        for(int i=0;i<n;i++){
            if(s[i] == 'L') Lc++;
            if(s[i] == 'R') Rc++;

            if(Lc == Rc){
                Lc = 0;
                Rc = 0;
                output++;
            }

        }

        return output;

    }
};
