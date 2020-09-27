class Solution {
public:
    int numJewelsInStones(string J, string S) {

        int output = 0;
        for(auto i:J){
            for(auto j:S){
                if(i == j) output++;
            }
        }

        return output;
    }
};
