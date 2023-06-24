#include <stdio.h>
#include "tictactoe.h"

void print_board(char* board) {
    printf("   1   2   3\n");
    printf("A  %c | %c | %c\n", *board, *(board + 1), *(board + 2));
    printf("  ---+---+---\n");
    printf("B  %c | %c | %c\n", *(board + 3), *(board + 4), *(board + 5));
    printf("  ---+---+---\n");
    printf("C  %c | %c | %c\n", *(board + 6), *(board + 7), *(board + 8));
}

int query_player(char player) {
    printf("Player %c, it is your turn to move. Select a position.\n", player);
    printf("Choose a position by entering the corresponding coordinates (e.g. A2) :\n");

    char alpha_pos, num_pos;
    scanf(" %c%c", &alpha_pos, &num_pos);
    
    int pos_index = (alpha_pos - 'A') + (num_pos - '1');

    return pos_index;
}