#include <stdio.h>
#define A 'a'

int main(void)
{
    char word[] = "abrakadabra";
    char* word_ptr = word;
    size_t counter = 0;
    
    while (*word_ptr != '\0') {
        if (*word_ptr == A)
            printf("%zu\n", counter + 1);

        ++counter; ++word_ptr; 
    }

    return 0;
}
