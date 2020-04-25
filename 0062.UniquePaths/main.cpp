class Solution {
public:
    int factorial_new(int n, int r, int div){
        int f = 1;
        int denom = 1;
        for(int i = n; i>=r+1; i--){
            f *= i;
            while(denom <= div && f%denom == 0){
                f = f/denom;
                denom++;
            }

        }
        return f;
    }

    int uniquePaths(int m, int n) {
        int down = m-1;
        int right = n-1;

        int comb = factorial_new(right + down, max(right,down), min(right,down));

        return comb;

    }
};
