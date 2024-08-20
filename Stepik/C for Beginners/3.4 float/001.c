#include <stdio.h>

int main(void)
{
    float weight, height;
    scanf("%f%f", &weight, &height);
    printf("%f", weight / (height * height));
    return 0;
}
