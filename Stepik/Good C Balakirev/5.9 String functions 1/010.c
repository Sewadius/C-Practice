#include <stdio.h>
#include <string.h>
#define TOTAL   7
#define SIZE    50

int main(void)
{
    // Здесь продолжайте программу
    char ps[TOTAL][SIZE];
    char ps_res[TOTAL * SIZE + 7] = {};

    for (int i = 0; i < TOTAL; ++i) {
        scanf("%s", ps[i]);
        strcat(ps_res, ps[i]);
        
        if (i != TOTAL - 1)
            strcat(ps_res, " ");
    }

    puts(ps_res);
    // __ASSERT_TESTS__
    return 0;
}
