class Solution {
public:;

    int sumSquare(int n) {
        int sum = 0;
        while(n !=0){
            sum += (n%10) * (n%10);
            n = n/10;
        }
        return sum;
    }

    bool isHappy(int n) {
        map<int, int> track;
        track[n]++;
        int sum = sumSquare(n);
        while(true){
            track[sum]++;
            if(sum == 1) return true;
            if(track[sum] > 1) return false;
            sum = sumSquare(sum);
        }

        return false;
    }
};
