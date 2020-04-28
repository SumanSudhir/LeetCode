class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        if(x == 1) return 1;
        int n = x/2;
        int min_error = INT_MAX;
        int output;

        for(int i=1; i<=n && i < 46341; i++){

            if((x - i*i) >= 0 && (x - i*i) < min_error){
                min_error = x-i*i;
                output = i;
            }
        }

        return output;

    }
};
