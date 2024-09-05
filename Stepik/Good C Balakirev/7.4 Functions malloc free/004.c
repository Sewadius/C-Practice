#include <stdio.h>
#include <stdlib.h>
#define TOTAL 4

int main(void)
{
    short* data = malloc(TOTAL * sizeof(short));
    short values[TOTAL] = {-4, 3, 0, 100};
    short* ptr_data = data;

    for (int i = 0; i < TOTAL; ++i) {
        *ptr_data = values[i];
        ++ptr_data;
    }

    //__ASSERT_TESTS__
    free(data);
    return 0;
}
