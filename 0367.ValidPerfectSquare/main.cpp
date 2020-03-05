class Solution {
public:
    bool isPerfectSquare(int num) {

        if(num == 1) return true;
        int temp;
        int upper = num/2;
        if(upper > 46340) upper = 46340;

        for(int i=1;i<=upper;i++){
            temp = i*i;
            if(temp == num) return true;
        }

        return false;
    }
};
