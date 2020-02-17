class Solution {
public:
    int divide(int dividend, int divisor) {

        int count = 0;
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
        bool positive = (dividend>=0)==(divisor>0);

        dividend = abs(dividend);
        divisor = abs(divisor);

        while(dividend >= divisor){
            int temp_count = 1;
            int temp_divisor = divisor;
            while(dividend>=(temp_divisor << 1) && (temp_divisor << 1) > 0){
                temp_count <<= 1;
                temp_divisor <<= 1;
            }
            count += temp_count;
            dividend -= temp_divisor;
        }

        if(!positive) return -count;
        return count;
    }
};
