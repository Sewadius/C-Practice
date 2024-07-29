#include <stdio.h>

int main(void)
{
    short marks[] = {3, 3, 4, 5};
    size_t len = sizeof marks / sizeof *marks;

    short sum = 0;
    for (size_t i = 0; i < len; ++i)
        sum += marks[i];

    printf("%.2f", (float)sum / len);
    return 0;
}
