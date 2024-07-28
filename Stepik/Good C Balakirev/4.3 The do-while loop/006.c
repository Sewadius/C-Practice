#include <stdio.h>
#define STAR '*'
#define SPACE ' '

int main(void)
{
    unsigned short lines;
    scanf("%hu", &lines);

    unsigned short k = 1;
    unsigned short num_spaces = lines - 1;

    do {
        for (unsigned short i = 0; i < num_spaces; ++i)
            printf("%c", SPACE);
        for (unsigned short i = 1; i < k * 2; ++i)
            printf("%c", STAR);
        printf("\n");
        --num_spaces; ++k;
    } while (k <= lines);

    return 0;
}
