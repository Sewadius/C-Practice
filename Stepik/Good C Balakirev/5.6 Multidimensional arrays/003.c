#include <stdio.h>

// Двумерный массив и указатели
int main(void)
{
    char game_pole[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char* p_row = game_pole[1];

    printf("%d", *p_row);           // "4" element
    p_row -= 2; 
    printf(" %d", *p_row);          // "2" element

    char (*p_ar)[3] = game_pole;    // Указатель на двумерный массив
    printf(" %d", *game_pole[2]);   // "7" element

    char x = p_ar[1][2];
    printf("\nx = %d", x);          // x = 6
    return 0;
}
