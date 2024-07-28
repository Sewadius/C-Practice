#include <stdio.h>

int main(void)
{
    unsigned short a, b;
    scanf("%hu %hu", &a, &b);

    for (unsigned short i = a; i <= b; ++i) {
        short d_1 = i % 10;
        short d_2 = i / 10 % 10;
        short d_3 = i / 100;

        _Bool check = d_1 != d_2 && d_1 != d_3 && d_2 != d_3;
        if (check) printf("%u ", i);
    }

    return 0;
}
