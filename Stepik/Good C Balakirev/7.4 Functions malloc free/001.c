#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* ar = malloc(10);                          // 10 байт
    int* ptr_int = malloc(sizeof(int));             // 4 байта
    short* ptr_short = malloc(7 * sizeof(short));   // 7 элементов типа short

    // Освобождение памяти
    free(ar);
    free(ptr_int);
    free(ptr_short);

    return 0;
}
