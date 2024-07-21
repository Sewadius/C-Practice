#include <stdio.h>

int main(void)
{
    unsigned n;
    double s = .0;

    scanf("%u", &n);
    
    while (n != 1) {
        s += 1. / (n * n);
        n--;
    }

    printf("%.3f", s + 1);
    return 0;
}
