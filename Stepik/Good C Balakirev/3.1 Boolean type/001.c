#include <stdio.h>

int main(void)
{
    _Bool fl_view = 0;
    printf("Size of _Bool: %d\n", sizeof fl_view);    // "Size of _Bool: 1"

    // Значение приводится к "1"
    fl_view = 10;
    printf("fl_view = %d", fl_view);    // 1
    return 0;
}
