#include <stdio.h>
#define ROW 49
#define LINES 13
#define STARS 8

int main()
{
    for (unsigned char i = 0; i < LINES; ++i)
    {
        if (0 < i && i < 7)
        {
            for (unsigned char k = 0; k < STARS; ++k)
                printf("*");
            for (unsigned char l = STARS; l < ROW; ++l)
                printf("_");
        }
        else
        {
            for (unsigned char j = 0; j < ROW; ++j)
                printf("_");
        }

        printf("\n");
    }

    return 0;
}
