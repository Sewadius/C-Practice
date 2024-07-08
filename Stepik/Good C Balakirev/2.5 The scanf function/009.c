#include <stdio.h>

int main(void)
{
    int num_1;
    double num_2, num_3;
    scanf("%d %lf %lf", &num_1, &num_2, &num_3);
    printf("%d %.2f %.2f", num_1, num_2, num_3);
    return 0;
}
