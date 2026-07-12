#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<char>>& board, int row, int col, char digit) {

    for (int i = 0; i < 9; i++) {
        if (board[i][col] == digit) {
            return false;
        }
    }

    for (int j = 0; j < 9; j++) {
        if (board[row][j] == digit) {
            return false;
        }
    }

    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;
    for (int i = startRow; i < startRow + 3; i++) {
        for (int j = startCol; j < startCol + 3; j++) {
            if (board[i][j] == digit) {
                return false;
            }
        }
    } return true;
}

bool isValidSudoku(vector<vector<char>>& board) {

    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            if (board[row][col] == '.') {
                continue;
            }
            char digit = board[row][col];
            board[row][col] = '.';
            if (!isSafe(board, row, col, digit)) {
                return false;
            }
            board[row][col] = digit;
        }
    } return true;
}

int main() {

    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    cout << isValidSudoku(board);
    return 0;
}