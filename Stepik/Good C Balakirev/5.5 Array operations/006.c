#include <stdio.h>

#define SIZE_BUFFER 128

int main(void)
{
    int buffer[SIZE_BUFFER];
    size_t count = 0;
    size_t sz_ar = sizeof buffer / sizeof *buffer;

    while (count < sz_ar && scanf("%d", &buffer[count]) == 1)
        count++;

    // Здесь продолжайте программу
    size_t l = count / 2;

    for (size_t i = 0; i < l; ++i) {
        int temp = buffer[i];
        buffer[i] = count % 2 == 0 ? buffer[l + i] : buffer[l + i + 1];
        if (count % 2 == 0)
            buffer[l + i] = temp;
        else
            buffer[l + i + 1] = temp;
    }

    for (int i = 0; i < count; ++i)
        printf("%d ", buffer[i]);

    return 0;
}
