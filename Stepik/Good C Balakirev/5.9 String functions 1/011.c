#include <stdio.h>
#include <string.h>
#define TOTAL   7
#define LENGTH  50

int main(void)
{
    // Здесь продолжайте программу
    char ps[TOTAL][LENGTH];
    char ps_res[TOTAL * LENGTH + TOTAL] = "";

    for (int i = 0; i < TOTAL; ++i) {
        scanf("%s", ps[i]);

        if (strlen(ps[i]) % 2 == 0) {
            if (ps_res[0] != '\0') {
                strcat(ps_res, " ");
            }
            strcat(ps_res, ps[i]);
        }
    }

    puts(ps_res);

    // __ASSERT_TESTS__ 
    return 0;
}
