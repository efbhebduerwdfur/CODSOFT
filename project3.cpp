#include <iostream>
using namespace std;

int main() {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char player1 = 'X';
    int row, col, moves = 0;
    bool gameOver = false;

    cout << "TIC-TAC-TOE GAME\n";
    cout << "Player 1: X \nPlayer 2: O\n";

    while (!gameOver) {

        cout << "\n  1 2 3\n";
        for (int i = 0; i < 3; i++) {
            cout << i + 1 << " ";
            for (int j = 0; j < 3; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        } 
        cout << "Player " << player1 << ", enter row and column (1-3): ";
        cin >> row >> col;
        row--; col--;
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = player1;
            moves++;

            if (
                (board[row][0] == player1 && board[row][1] == player1 && board[row][2] == player1) ||
                (board[0][col] == player1 && board[1][col] == player1 && board[2][col] == player1) ||
                (row == col && board[0][0] == player1 && board[1][1] == player1 && board[2][2] == player1) ||
                (row + col == 2 && board[0][2] == player1 && board[1][1] == player1 && board[2][0] == player1)
            ) {
                cout << "Player " << player1 << " wins!\n";
                gameOver = true;
            }
            else if (moves == 9) {
                cout << "It's a draw!\n";
                gameOver = true;
            } else {
                
                player1 = (player1 == 'X') ? 'O' : 'X';
            }
        } else {
            cout << "Invalid move. Try again.\n";
        }
    }

    return 0;
}
