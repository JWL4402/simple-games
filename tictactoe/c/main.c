#include <stdio.h>
#include <string.h>

#include "tictactoe.h"

int main() {
    char board[9];
    memset(board, ' ', 9 * sizeof(char));

    printf("Welcome to TicTacToe!\n\n");

    print_board(board);
    query_player(board, 'X');
    print_board(board);

    return 0;
}