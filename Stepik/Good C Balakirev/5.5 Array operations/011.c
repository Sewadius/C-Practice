#include <stdio.h>
#define TOTAL 20

int main(void)
{
    float ws[TOTAL] = {0.0f};
    size_t count = 0;
    size_t sz_ar = sizeof ws / sizeof *ws;

    while (count < sz_ar && scanf("%f", &ws[count]) == 1)
        count++;

    // Здесь продолжайте программу
    int pos;
    for (int i = 0; i < count - 1; ++i) {
        pos = i;

        for (int j = i + 1; j < count; ++j) {
            if (ws[pos] > ws[j]) pos = j;
        }

        if (pos != i) {
            float temp = ws[i];
            ws[i] = ws[pos];
            ws[pos] = temp;
        }
    }

    for (int i = 0; i < count; ++i)
        printf("%.2f ", ws[i]);

    return 0;
}
