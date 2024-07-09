#include <stdio.h>

int main(void)
{
    short a, b, c;
    scanf("%hd %hd %hd", &a, &b, &c);
    short d = b * b - 4 * a * c;
    
    if (d > 0)
        printf("real roots exist\n");
    else
        printf("%d", d);

    return 0;
}
