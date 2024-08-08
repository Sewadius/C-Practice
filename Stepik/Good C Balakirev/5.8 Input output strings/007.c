#include <stdio.h>
#define TOTAL 6

int main(void)
{
    char data[TOTAL][31];
    for (int i = 0; i < TOTAL; ++i)
        scanf("%30s", data[i]);

    for (int i = 0; i < TOTAL; ++i)
        if (data[i][0] == 'G')
            printf("%s ", data[i]);
        
    return 0;
}
