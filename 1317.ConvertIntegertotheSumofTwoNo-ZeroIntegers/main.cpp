class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> output;
        output.push_back(1);
        output.push_back(n-1);
        int left = output[0];
        int right = output[1];

        while(left !=0 && right !=0 ){
            if(left%10 == 0 && left != 0){
                output[0] += 1;
                output[1] -= 1;
                left = output[0];
                right = output[1];
            }

            if(right%10 == 0 && right != 0){
                output[0] += 1;
                output[1] -= 1;
                left = output[0];
                right = output[1];
            }

            left = left/10;
            right = right/10;
        }

        // output[0] = left;
        // output[1] = right;
        return output;
    }
};
