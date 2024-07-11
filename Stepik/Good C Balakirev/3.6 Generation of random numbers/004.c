#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int range = 10;

    
    int r_1 = rand() % range;       // Диапазон [0; 9)       
    int r_2 = rand() % range - 5;   // Диапазон [-5; range - 5)
    int r_3 = rand() + rand();      // Увеличивает диапазон в 2 раза

    double range_float = (double)rand() / RAND_MAX; // [0; 1]

    // Значения будут меняться
    printf("%d, %d\n", r_1, r_2);
    printf("%.3f", range_float);
    return 0;
}
