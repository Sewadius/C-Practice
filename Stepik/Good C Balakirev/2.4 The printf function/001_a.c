#include <stdio.h>

int main(void)
{
    long long var_l = -12345678901234;

    printf("Wrong value: %d\n", var_l);
    printf("True value: %lld\n\n", var_l);

    long double var_ld = 547567.5678349503;

    printf("Wrong value: %f\n", var_ld);
    printf("True value: %Lf", var_ld);

    getchar();
    return 0;
}
