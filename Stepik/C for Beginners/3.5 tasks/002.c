#include <stdio.h>

int main(void)
{
    unsigned short round, total;
    scanf("%hu%hu", &round, &total);
    printf("%u %u", total / round, total % round);
    return 0;
}
