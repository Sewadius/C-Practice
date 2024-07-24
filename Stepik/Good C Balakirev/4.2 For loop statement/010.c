#include <stdio.h>

int main(void)
{
    unsigned int n;
    scanf("%u", &n);

    unsigned int s1 = 0, s2 = 0;
    for (int i = 0; i < 3; i++, n /= 10)
        s1 += n % 10;

    for (int i = 0; i < 3; i++, n /= 10) 
        s2 += n % 10;

    printf(s1 == s2 ? "yes\n" : "no\n");
    return 0;
}
