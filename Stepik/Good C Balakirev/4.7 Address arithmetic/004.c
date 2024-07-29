#include <stdio.h>

// Изменение значения int с помощью указателя
int main(void)
{
    int g = 476789;
    int* ptr = &g;

    printf("Old value g = %d\n", g);
    
    *ptr += 1;
    printf("New value g = %d\n", g);
    return 0;
}
