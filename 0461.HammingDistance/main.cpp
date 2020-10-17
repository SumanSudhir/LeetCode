class Solution {
public:
    int hammingDistance(int x, int y) {

        int out = 0;
        while(x != 0 || y != 0){
            int x_digit = x%2;
            int y_digit = y%2;

            if(x_digit != y_digit) out++;
            x = x/2;
            y = y/2;
        }

        return out;
    }
};
