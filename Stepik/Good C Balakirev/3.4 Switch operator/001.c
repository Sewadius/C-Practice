#include <stdio.h>

int main(void)
{
    char item;

    if (scanf("%c", &item) != 1) {
        printf("Error input");
        return 0;
    }

    switch (item) {
        case 'a': case 'A':
            printf("Symbol A\n"); break;
        case 'b': case 'B':
            printf("Symbol B\n"); break;
        case 'c': case 'C':
            printf("Symbol C\n"); break;
        default:
            printf("Unknown symbol\n");
    }

    return 0;
}
