#include <stdio.h>

int main(void)
{
    short marks[] = {1, 2, 3};
    size_t size_bytes = sizeof marks;
    size_t size_elements = size_bytes / sizeof *marks;

    printf("%zu %zu", size_elements, size_bytes);
    return 0;
}
