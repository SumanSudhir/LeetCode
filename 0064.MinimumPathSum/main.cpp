class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {

        if(grid.size() == 0) return 0;
        int rows = grid.size();
        int colms = grid[0].size();
        vector<vector<int>> sum(rows, vector<int>(colms, 0));
        sum[0][0] = grid[0][0];

        for(int i=1; i<colms; i++) sum[0][i] = sum[0][i-1] + grid[0][i];
        for(int j=1; j<rows; j++) sum[j][0] = sum[j-1][0] + grid[j][0];

        for(int i=1; i<rows; i++){
            for(int j=1; j<colms; j++) sum[i][j] = min(sum[i-1][j], sum[i][j-1]) + grid[i][j];
        }

        return sum[rows-1][colms-1];
    }
};
