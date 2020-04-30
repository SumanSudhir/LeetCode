class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int colms = matrix[0].size();
        vector<vector<int>> store;

        for(int i=0; i<rows; i++){
            for(int j=0; j<colms; j++){
                if(matrix[i][j] == 0){
                    store.push_back(vector<int> {i,j});
                }
            }
        }

        int n = store.size();
        cout << n;
        for(int i=0; i<n; i++){
            int row = store[i][0];
            int colm = store[i][1];
            for(int j=0; j<colms; j++) matrix[row][j] = 0 ;
            for(int k=0; k<rows; k++) matrix[k][colm] = 0;
        }

    }
};
