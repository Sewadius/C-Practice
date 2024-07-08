#include <stdio.h>

int main(void)
{
    unsigned char a;
    scanf("%hhu", &a);
    printf("%.3f", 1.732 * a / 6);
    return 0;
}
