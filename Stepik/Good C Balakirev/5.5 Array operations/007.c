#include <stdio.h>

#define TOTAL 10

int main(void)
{
    int digs[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof digs / sizeof *digs;

    while (count < sz_ar && scanf("%d", &digs[count]) == 1)
        count++;

    // Здесь продолжайте программу
    for (int i = 0; i < count; ++i) {
        if (digs[i] == 5) {
            for (int j = TOTAL - 1; j > i + 1; --j)
                digs[j] = digs[j - 1];
            digs[i + 1] = -5; ++count; break;
        }
    }

    count = count < TOTAL ? count : TOTAL;
    for (int i = 0; i < count; ++i)
        printf("%d ", *(digs + i));

    return 0;
}
