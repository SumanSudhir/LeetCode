class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int n = mat.size();
        int output = 0;

        for(int i=0;i<n;i++){
            output += mat[i][i] + mat[i][n-1-i];
        }

        if(n%2 != 0) output = output - mat[(n-1)/2][(n-1)/2];

        return output;
    }
};
