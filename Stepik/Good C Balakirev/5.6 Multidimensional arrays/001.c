#include <stdio.h>

// Инициализация и вывод двумерного массива
int main(void)
{
    char game_pole[3][3] = {1, 2, 3, 4};
    char game_pole_2[3][3] = {{1, 2}, {3, 4}};

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            printf("%d ", game_pole[i][j]);
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            printf("%d ", game_pole_2[i][j]);
        printf("\n");
    }
    
    return 0;
}
