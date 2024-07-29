#include <stdio.h>

int main(void)
{
    double value;
    scanf("%lf", &value);

    char* ptr = (char*)&value;
    for (int i = 0; i < sizeof value; ++i)
        printf("%d ", *ptr++);

    return 0;
}
