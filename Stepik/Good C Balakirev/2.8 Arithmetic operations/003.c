#include <stdio.h>

int main(void)
{
    double width, length;
    scanf("%lf %lf", &width, &length);
    printf("Периметр: %.1f", (width *= 2) + (length *= 2));
    return 0;
}
