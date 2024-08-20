#include <stdio.h>

unsigned int counter()
{
    static unsigned int cnt = 10;
    return ++cnt;
}

int main(void)
{
    unsigned int times;
    times = counter();
    printf("times = %u\n", times);          // 11
    printf("counter(): %u\n", counter());   // 12
    printf("counter(): %u\n", counter());   // 13
    printf("counter(): %u\n", counter());   // 14
    return 0;
}
