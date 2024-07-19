#include <stdio.h>

const int max_size = 5;

#define SIZE    1
#define IS_CPP

int main(void)
{
    #if SIZE > 10 - 8
        printf("%d", SIZE);
    #endif

    #if !defined(SIZE)
        printf("%d", SIZE);
    #endif

    #ifdef IS_CPP
        printf("Hello1\n");
    #endif

    #if SIZE >= 0 && SIZE <= 10
        printf("Hello2\n");
    #endif

    #if (SIZE == 1)
        printf("Hello3\n");
    #endif
    return 0;
}
