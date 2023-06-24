#include <stdio.h>
#include "tictactoe.h"

void print_board(char* board) {
    printf(" %c | %c | %c\n", *board, *(board + 1), *(board + 2));
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", *(board + 3), *(board + 4), *(board + 5));
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", *(board + 6), *(board + 7), *(board + 8));
}