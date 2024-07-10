#include <stdio.h>

int main(void)
{
    double a, b, c;
    scanf("%lf, %lf, %lf", &a, &b, &c);

    _Bool 
        check_1 = a + b > c,
        check_2 = a + c > b,
        check_3 = b + c > a;

    if (check_1 && check_2 && check_3)
        printf("yes");
    else
        printf("no");
        
    return 0;
}
