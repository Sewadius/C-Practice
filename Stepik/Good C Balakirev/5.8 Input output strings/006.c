#include <stdio.h>
#define CITIES 6

int main(void)
{
    char data[CITIES][20];
    for (int i = 0; i < CITIES; ++i)
        scanf("%19s", data[i]);

    for (int i = CITIES - 1; i >= 0; --i)
        printf("%s ", data[i]);
        
    return 0;
}
