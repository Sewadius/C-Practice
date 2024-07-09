#include <stdio.h>

int main(void)
{
    int count = 1;
    double var_d = 10.;
    short p = 2;

    count -= 3 - 5;     // 1 - (3 - 5) = 3
    var_d /= 3. + p;    // 2.0
    p *= 20 - 5;        // 30

    printf("count = %d\nvar_d = %.2f\np = %d", count, var_d, p);
    return 0;
}
