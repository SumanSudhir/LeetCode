class Solution {
public:
    int xorOperation(int n, int start) {

        // vector<int> nums;
        int output = 0;

        for(int i=0;i<n;i++){
            output = output^(start + 2*i);
        }


        return output;

    }
};
