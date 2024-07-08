#include <stdio.h>

int main(void)
{
    long long var_lli = 0;
    double var_d = 0;

    int res = scanf("%lld %lf", &var_lli, &var_d);

    printf("res = %d; var_lli = %lld, var_d = %.2f\n", res, var_lli, var_d);
    return 0;
}
