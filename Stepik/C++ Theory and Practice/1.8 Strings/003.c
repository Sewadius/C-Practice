#include <stdio.h>
#define START 2
#define END 7

int main(void)
{
    const char word[] = "abrakadabra";

    for (int i = START; i < END; ++i)
        printf("%c", *(word + i));

    return 0;
}
