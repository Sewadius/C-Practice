#include <stdio.h>
#include <math.h>

#define MAX_LENGTH  100

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    double length = sqrt(x * x + y * y);

    if (length > MAX_LENGTH) {
        printf("Radius length exceeds value of MAX_LENGTH");
        return 0;
    }

    printf("%.2f", length);
    return 0;
}
