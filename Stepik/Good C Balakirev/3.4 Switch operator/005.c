#include <stdio.h>

int main(void)
{
    unsigned short number;
    scanf("%hu", &number);
    printf("%s", number / 1000 == 3 ? "yes" : "no");
    return 0;
}
