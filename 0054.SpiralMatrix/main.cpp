class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> output;
        if(matrix.size() == 0) return output;
        int rows = matrix.size()-1;
        int colms = matrix[0].size() - 1;
        int start_row = 0;
        int start_colm = 0;

        while(start_row <= rows && start_colm <= colms){

            for(int i=start_colm; i<=colms; ++i) output.push_back(matrix[start_row][i]);
            start_row++;
            for(int i=start_row; i<=rows; ++i) output.push_back(matrix[i][colms]);
            colms--;
            if (start_colm > colms || start_row > rows) break;
            for(int i=colms; i>=start_colm; --i) output.push_back(matrix[rows][i]);
            rows--;
            for(int i=rows; i>=start_row; --i) output.push_back(matrix[i][start_colm]);
            start_colm++;

        }

        return output;
    }
};
