#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE    10
#define MINES   12

int main(void)
{
    char pg[SIZE][SIZE] = {0};
    int placed_mines = 0;

    // Seed the random number generator
    srand(time(NULL));

    while (placed_mines < MINES) {
        int row = rand() % SIZE;
        int col = rand() % SIZE;

        // Check if the current cell and its neighbors are empty
        if (pg[row][col] == 0) {
            _Bool can_place = 1;
            for (int i = row - 1; i <= row + 1 && can_place; ++i) {
                for (int j = col - 1; j <= col + 1 && can_place; ++j) {
                    if (i >= 0 && i < SIZE && j >= 0 && j < SIZE && pg[i][j] == '*')
                        can_place = 0;
                }
            }

            if (can_place) {
                pg[row][col] = '*';
                placed_mines++;
            }
        }
    }

    //__assert_verify_pg(pg); 
    return 0;
}
