#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool fl_view = true;
    printf("fl_view = %d\n", fl_view);      // 1

    fl_view = false;
    printf("fl_view = %d", fl_view);        // 0

    return 0;
}