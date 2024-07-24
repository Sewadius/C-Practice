#include <stdio.h>

int main(void)
{
    unsigned int n;
    scanf("%u", &n);

    unsigned int 
        reversed = 0,
        initial = n;

    while (n > 0) {
        reversed *= 10;
        reversed += n % 10;
        n /= 10;
    }

    printf(initial == reversed ? "yes\n" : "no\n");
    return 0;
}
