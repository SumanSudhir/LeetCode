class Solution {
public:
    int divide(int dividend, int divisor) {

        int count = 0;
        bool positive = true;

        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(dividend == INT_MIN && divisor == INT_MIN) return 1;
        if(dividend > INT_MIN && divisor == INT_MIN) return 0;
        if(divisor == 1) return dividend;
        if(divisor == -1) return -dividend;

        if(dividend == INT_MIN && divisor > 0){
            dividend += divisor;
            count++;
        }
        if(dividend == INT_MIN && divisor < 0){
            dividend -= divisor;
            count++;
        }
        if(divisor == 1) return dividend;
        if(divisor == -1) return -dividend;

        if(dividend > 0 && divisor < 0) positive = false;
        if(dividend < 0 && divisor > 0) positive = false;
        dividend = abs(dividend);
        divisor = abs(divisor);

        while(dividend >= divisor){
            dividend -= divisor;
            count++;
        }
        // if(count > INT_MAX) return INT_MAX;
        if(!positive) return -count;

        return count;
    }
};
