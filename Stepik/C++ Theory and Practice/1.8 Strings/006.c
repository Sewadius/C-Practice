#include <stdio.h>
#include <string.h>
#define SIZE 10

int main(void)
{
    const char CHECK[SIZE] = "done";
    char word[SIZE];
    size_t counter = 0;
    
    while (1) {
        scanf("%9s", word);
        if (strcmp(word, CHECK) == 0) break;
        ++counter;
    }

    printf("%zu\n", counter);
    return 0;
}
