#include <stdio.h>

int main(void)
{
    float pows[] = {1.2, -9.8, -0.1};
    size_t len = sizeof pows / sizeof *pows;

    for (int i = len - 1; i >= 0; --i)
        printf("%.1f ", pows[i]);

    return 0;
}
