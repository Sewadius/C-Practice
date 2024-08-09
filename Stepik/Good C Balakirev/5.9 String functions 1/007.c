#include <stdio.h>
#include <string.h>
#define TOTAL   6
#define SIZE    50

int main(void)
{
    char cities[TOTAL][SIZE];
    size_t max_length = 0;
    int index = 0;

    for (int i = 0; i < TOTAL; ++i)
        scanf("%s", cities[i]);

    for (int i = 0; i < TOTAL; ++i)
        if (strlen(cities[i]) > max_length) {
            max_length = strlen(cities[i]);
            index = i;
        }

    printf("%s\n", cities[index]);
    return 0;
}
