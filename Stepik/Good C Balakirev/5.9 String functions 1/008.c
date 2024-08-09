#include <stdio.h>
#include <string.h>
#define TOTAL   6
#define SIZE    50

int main(void)
{
    char cities[TOTAL][SIZE];
    size_t max_length = 0;
    int first_index, second_index;

    for (int i = 0; i < TOTAL; ++i)
        scanf("%s", cities[i]);

    for (int i = 0; i < TOTAL; ++i) {
        size_t current_length = strlen(cities[i]);

        if (current_length > max_length) {
            max_length = current_length;
            first_index = i;
        }
    }

    max_length = 0;

    for (int i = 0 ; i < TOTAL; ++i) {
        size_t current_length = strlen(cities[i]);

        if (current_length > max_length && i != first_index) {
            max_length = current_length;
            second_index = i;
        }
    }

    printf("%s %s\n", cities[first_index], cities[second_index]);
    return 0;
}
