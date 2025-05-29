#include <stdio.h>

int main(void)
{
    int k;
    scanf("%d", &k);

    int hours = k / 3600;
    int minutes = (k / 60) % 60;

    printf("%d %d\n", hours, minutes);
    return 0;
}
