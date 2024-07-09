#include <stdio.h>

int main(void)
{
    double number;
    scanf("%lf", &number);

    _Bool check = -10 <= number && number < 0 || 5 < number && number <= 12;
    printf("%d", check);
    
    return 0;
}
