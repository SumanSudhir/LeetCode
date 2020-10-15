class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {

        int rows = A.size();
        int colms = A[0].size();

        for(int i=0;i<rows;i++){
            for(int j=0;j<colms/2;j++){
                swap(A[i][j],A[i][colms-j-1]);

                A[i][j] = (1+A[i][j])%2;
                A[i][colms-j-1] = (1+A[i][colms-j-1])%2;
            }
            if(colms%2 != 0) A[i][colms/2] = (1+A[i][colms/2])%2;
        }

        return A;

    }
};
