#include <stdio.h>
#define TABLE 4

int main(void)
{
    unsigned short table_legs;
    scanf("%hu", &table_legs);
    printf("%u\n", table_legs / TABLE);
    return 0;
}
