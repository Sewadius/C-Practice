#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    
    char* ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL) *ptr_n = '\0';

    // Здесь продолжайте программу
    size_t fragments = 0;
    char* ptr = strstr(str, "is");
    
    while (ptr != NULL) {
        ++fragments;
        ptr = strstr(ptr + 2, "is");
    }

    printf("%zu", fragments);
    return 0;
}
