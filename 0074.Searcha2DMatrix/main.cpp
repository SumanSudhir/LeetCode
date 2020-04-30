class Solution {
public:
    bool binarySearch(vector<int>& rows, int target, int start, int stop){
        if(stop < start) return false;
        int mid = (start + stop)/2;
        if(rows[mid] == target) return true;
        if(target < rows[mid]) return binarySearch(rows, target, start, mid-1);

        return binarySearch(rows, target, mid+1, stop);
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0 || matrix[0].size() == 0) return false;
        int rows = matrix.size();
        int colms = matrix[0].size();
        if(target<matrix[0][0] || target>matrix[rows-1][colms-1]) return false;
        for(int i=0; i<rows; i++){
            if(matrix[i][0] > target) return false;
            if(target >= matrix[i][0] && target <= matrix[i][colms-1]) return binarySearch(matrix[i], target, 0, colms-1);
        }
        return false;
    }
};
