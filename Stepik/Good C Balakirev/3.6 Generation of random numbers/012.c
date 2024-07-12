#include <stdio.h>

int main(void)
{
    unsigned short N;
    scanf("%hu", &N);

    // Здесь продолжайте программу
    double size = 2.54 * N;
    printf("%.0lf", size);
    
    return 0;
}
