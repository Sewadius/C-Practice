#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    time_t t = time(NULL);
    srand(t);

    int r_1 = rand();
    int r_2 = rand();

    // Значения будут меняться
    printf("%d, %d", r_1, r_2);
    return 0;
}
