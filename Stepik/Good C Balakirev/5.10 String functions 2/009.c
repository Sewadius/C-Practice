#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL) *ptr_n = '\0';

    // Здесь продолжайте программу
    char* ptr = strchr(str, '-');

    while (ptr != NULL) {

    }

    return 0;
}
