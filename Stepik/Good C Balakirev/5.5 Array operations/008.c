#include <stdio.h>
#define TOTAL 10
#define FIVE 5

int main(void)
{
    int digs[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof digs / sizeof *digs;
    size_t insert = 0;

    while (count < sz_ar && scanf("%d", &digs[count]) == 1) {
        if (digs[count] == FIVE) {
            count++; digs[count] = --insert;
        }
        count++;
    }

    for (int j = 0; j < count; j++)
        printf("%d ", digs[j]);

    return 0;
}
