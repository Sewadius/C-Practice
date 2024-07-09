#include <stdio.h>

int main(void)
{
    short number;
    scanf("%hd", &number);

    if (number % 10 == 3)
        printf("yes");
    else
        printf("no");

    return 0;
}
