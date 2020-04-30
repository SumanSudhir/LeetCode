class Solution {
public:
    int climbStairs(int n) {
        if(n==0) return 1;
        if(n==1) return 1;
        if(n==2) return 2;

        int last_step = 2;
        int pre_last_step = 1;
        int output = 0;

        for(int i=3; i<=n;i++){
            output = last_step + pre_last_step;
            pre_last_step = last_step;
            last_step = output;
        }

        return output;

    }
};
