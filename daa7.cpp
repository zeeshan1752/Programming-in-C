#include <iostream>
using namespace std;

int countt = 0;  // Global counter for total solutions

// Function to print a solution board
void print(int board[][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "-----------------\n";
}

// Function to check whether a position is valid or not
bool isValid(int board[][8], int row, int col) {
    // Check this row on the left side
    for (int i = 0; i < col; i++) {
        if (board[row][i])
            return false;
    }

    // Check upper-left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j])
            return false;
    }

    // Check lower-left diagonal
    for (int i = row, j = col; i < 8 && j >= 0; i++, j--) {
        if (board[i][j])
            return false;
    }

    return true;
}

// Recursive function to solve the N-Queens problem
void ninjaQueens(int board[][8], int currentColumn) {
    if (currentColumn >= 8) {
        print(board);  // Print solution
        countt++;
        return;
    }

    // Try placing a queen in all rows of the current column
    for (int i = 0; i < 8; i++) {
        if (isValid(board, i, currentColumn)) {
            board[i][currentColumn] = 1;         // Place queen
            ninjaQueens(board, currentColumn + 1); // Recurse for next column
            board[i][currentColumn] = 0;         // Backtrack
        }
    }
}

int main() {
    int board[8][8] = {0};  // Initialize all cells to 0 (no queens)
    ninjaQueens(board, 0);  // Start from first column
    cout << "Total solutions: " << countt << endl;
    return 0;
}