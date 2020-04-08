class Solution {

public:
    bool isValidRow(vector<vector<char>>& board, int row){
        int n = board.size();
        map<char, int> freq;
        for(int j=0; j<n; j++){
            if(board[row][j] != '.'){
                freq[board[row][j]]++;
                if(freq.at(board[row][j]) > 1) return false;
            }
        }

        return true;
    }

    bool isValidColm(vector<vector<char>>& board, int colm){
        int n = board.size();
        map<char, int> freq;
        for(int j=0; j<n; j++){
            if(board[j][colm] != '.'){
                freq[board[j][colm]]++;
                if(freq.at(board[j][colm]) > 1) return false;
            }
        }

        return true;
    }

    bool isValidSquare(vector<vector<char>>& board, int start_row, int start_colm){
        map<char, int> freq;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(board[start_row + i][start_colm + j] != '.'){
                    freq[board[start_row + i][start_colm + j]]++;
                    if(freq.at(board[start_row + i][start_colm + j]) > 1 ) return false;
                }
            }
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        bool output;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                output = isValidRow(board, i) && isValidColm(board, j) && isValidSquare(board, i - i%3, j - j%3);
                if(!output) return false;
            }
        }

        return true;
    }
};
