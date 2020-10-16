class Solution {
public:
    bool judgeCircle(string moves) {

        int vertical = 0;
        int horizontal = 0;

        for(char i: moves){
            if(i=='R') horizontal++;
            else if(i=='L') horizontal--;
            else if(i=='U') vertical++;
            else if(i=='D') vertical--;
        }

        if(vertical == 0 && horizontal ==0) return true;

        return false;
    }
};
