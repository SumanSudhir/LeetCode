class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int rows = obstacleGrid.size();
        int colms = obstacleGrid[0].size();

        vector<vector<long int>> track(rows+1, vector<long int> (colms+1,0));
        track[0][1] = 1;
        for(int i=1; i<=rows; i++){
            for(int j=1; j<=colms; j++){
                if(obstacleGrid[i-1][j-1] == 0){
                    track[i][j] = track[i-1][j] + track[i][j-1];
                }
            }
        }

        return track[rows][colms];
    }
};
