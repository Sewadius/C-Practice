#include <stdio.h>
#include <stdlib.h>

// Преобразование строк в числа
int main(void)
{
    int a = atoi("123");
    long b = atol("234235354");
    long long c = atoll("24532374423428526");
    double d = atof("4535.32423");

    printf("a = %d\nb = %ld\nc = %lld\nd = %f\n", a, b, c, d);
    return 0;
}
