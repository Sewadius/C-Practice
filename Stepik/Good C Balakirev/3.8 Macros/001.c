#include <stdio.h>

// Требуется использовать круглые скобки для подстановок
#define SQ_PR(A, B)     ((A) * (B))

// Подстановка лексемы в виде строки #A и #B
#define TEXT(A, B)      "Square of rectangle (" #A ") x (" #B ")\n"

int main(void)
{
    int res = SQ_PR(2, 3);
    printf("res = %d\n", res);

    res = SQ_PR(10 - 2, 5 + 3);
    printf("res = %d\n", res);

    printf(TEXT(x - 2, y - 3));
    return 0;
}
