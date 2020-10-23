class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {

        vector<int> out;
        int row = matrix.size();
        int colm = matrix[0].size();

        vector<int> minR;
        vector<int> maxC;

        for(int i=0;i<row;i++){
            int min = INT_MAX;
            for(int j=0;j<colm;j++){
                if(matrix[i][j] < min) min = matrix[i][j];
            }
            minR.push_back(min);
        }

        for(int i=0;i<colm;i++){
            int max = INT_MIN;
            for(int j=0;j<row;j++){
                if(matrix[j][i] > max) max = matrix[j][i];
            }
            maxC.push_back(max);
        }

        int n = min(maxC.size(),minR.size());

        for(int i=0;i<maxC.size();i++){
            for(int j=0;j<minR.size();j++){
                if(maxC[i] == minR[j]) out.push_back(maxC[i]);
            }
        }

        return out;
    }
};
