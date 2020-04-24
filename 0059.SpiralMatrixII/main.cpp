class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> output(n, vector<int> (n,0));
        int rows = n-1;
        int colms = n-1;
        int start_row = 0;
        int start_colm = 0;
        int count = 0;

        while(start_row <= rows && start_colm <= colms){
            for(int i=start_colm; i<=colms; ++i) output[start_row][i] = ++count;
            start_row++;
            for(int i=start_row; i<=rows; ++i) output[i][colms] = ++count;
            colms--;
            if(start_colm > colms || start_row > rows) break;
            for(int i=colms; i>=start_colm ; --i) output[rows][i] = ++count;
            rows--;
            for(int i=rows; i>=start_row; --i ) output[i][start_colm] = ++count;
            start_colm++;
        }

        return output;
    }
};
