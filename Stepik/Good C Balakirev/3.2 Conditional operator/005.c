#include <stdio.h>

int main(void)
{
    short a, b;
    scanf("%hd %hd", &a, &b);
    
    if (a == b) 
        printf("%d", a);
    else if (a < b)
        printf("%d %d", a, b);
    else 
        printf("%d %d", b, a);

    return 0;
}
