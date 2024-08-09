#include <stdio.h>
#include <string.h>
#define TOTAL   7
#define SIZE    50

int main(void)
{
    char ps[TOTAL][SIZE];
    char ps_sort[TOTAL * SIZE + TOTAL] = "";
    int used[TOTAL] = {0};

    for (int i = 0; i < TOTAL; ++i)
        scanf("%s", ps[i]);

    for (int total_elements = 0; total_elements < TOTAL; ++total_elements) {
        size_t min_len = SIZE;
        int index = -1;

        for (int i = 0; i < TOTAL; ++i) {
            size_t current = strlen(ps[i]);

            if (!used[i] && current < min_len) {
                min_len = current;
                index = i;
            }
        }

        if (index != -1) {
            if (total_elements > 0) strcat(ps_sort, " ");
            strcat(ps_sort, ps[index]);
            used[index] = 1;
        }
    }

    puts(ps_sort);
    // __ASSERT_TESTS__ 
    return 0;
}
