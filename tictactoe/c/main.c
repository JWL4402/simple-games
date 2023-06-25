#include <stdio.h>
#include <string.h>

#include "tictactoe.h"

int main() {
    char board[9];
    memset(board, ' ', 9 * sizeof(char));

    char winner = ' ';
    char next_player = 'X';
    int turn = 1;

    printf("Welcome to TicTacToe!\n");

    while (winner == ' ') {
        printf("\nTurn %d\n\n---\n\n", turn);

        print_board(board);
        query_player(board, next_player);

        winner = check_win(board);
        next_player = next_player != 'X' ? 'X' : 'O';
        turn++;
    }

    if (winner == 'D') {
        printf("\nIt's a draw!");
    } else {
        printf("\nPlayer %c won!", winner);
    }

    return 0;
}