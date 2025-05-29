#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    int number;
    scanf("%d", &number);

    int rand_digit = rand() % (number + 1);
    printf("%d\n", rand_digit);
    return 0;
}
