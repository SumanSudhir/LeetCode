class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int n = candies.size();
        vector<bool> output(n, true);

        int max = candies[0];
        for(int i=0;i<n;i++){
            if(candies[i] > max) max = candies[i];
        }

        for(int i=0;i<n;i++){
            if(candies[i] + extraCandies < max) output[i] = false;
        }

        return output;
    }
};
