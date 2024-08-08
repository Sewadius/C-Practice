#include <stdio.h>
#define TOTAL_WORDS     5
#define LENGTH          10

int main(void)
{
    char data[TOTAL_WORDS][LENGTH];

    for (int i = 0; i < TOTAL_WORDS; ++i)
        scanf("%9s", data[i]);

    for (int i = 0; i < TOTAL_WORDS; ++i)
        printf("[%s]\n", data[i]);

    return 0;
}
