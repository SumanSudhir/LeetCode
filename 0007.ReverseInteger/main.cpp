class Solution {


public:
    int reverse(long int x) {

        bool flag = false;
        long int output = 0;
        if(x < 0){
            flag = true;
            x = -x;
        }

        while(x != 0){
            output = output*10 + x%10;
            x = x/10;
        }

        if(output > INT_MAX || output < INT_MIN)
            return 0;

        if(flag)
            output = -output;

        return output;
    }
};
