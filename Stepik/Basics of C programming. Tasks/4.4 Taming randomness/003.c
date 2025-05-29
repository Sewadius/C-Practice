#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    int s, e;
    scanf("%d%d", &s, &e);

    int rand_digit = s + rand() % (e - s + 1);
    printf("%d\n", rand_digit);
    return 0;
}
