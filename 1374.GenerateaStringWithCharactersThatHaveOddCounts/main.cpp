class Solution {
public:
    string generateTheString(int n) {

        string out (n,'a');
        if(n%2==0) out[n-1] = 'b';

        return out;
    }
};
