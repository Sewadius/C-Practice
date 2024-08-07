#include <stdio.h>

// Размер массива и количество строк/столбцов
int main(void)
{
    int game_pole[5][3];
    size_t bytes = sizeof game_pole;
    size_t row_bytes = sizeof game_pole[0];
    size_t rows = sizeof game_pole / sizeof game_pole[0];
    size_t cols = sizeof game_pole[0] / sizeof game_pole[0][0];

    printf("Size of game_pole = %zu bytes\n", bytes);
    printf("Size of 1 row: %zu bytes\n", row_bytes);
    printf("Total rows: %zu\n", rows);
    printf("Total cols: %zu\n", cols);
    return 0;
}
