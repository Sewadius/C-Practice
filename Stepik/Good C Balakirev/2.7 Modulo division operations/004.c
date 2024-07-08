#include <stdio.h>

int main(void)
{
    int count = 0, size = 5;
    
    int current = count++;      // Значение переменной меняется в последнюю очередь
    int width = ++size;         // Сначала меняется значение переменной

    printf("count = %d, size = %d\n", count, size);
    printf("current = %d, width = %d", current, width);

    return 0;
}
