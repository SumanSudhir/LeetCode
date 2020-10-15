class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size();
        int colms = grid[0].size();
        int out = 0;

        for(int i=0;i<rows;i++){
            for(int j=colms-1;j>=0;j--){
                if(grid[i][j] < 0) out++;
                else break;
            }
        }

        return out;
    }
};
