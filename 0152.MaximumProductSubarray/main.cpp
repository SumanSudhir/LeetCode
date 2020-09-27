class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int output = INT_MIN;

        int maxProd = 1;
        int minProd = 1;

        for(auto i:nums){
            if(i < 0) swap(maxProd,minProd);

            maxProd = max(maxProd*i,i);
            minProd = min(minProd*i,i);

            output = max(maxProd,output);
        }


        return output;
    }
};
