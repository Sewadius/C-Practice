#include <stdio.h>

// Переменная блока данных while
int main(void)
{
    int t = 3;

    while (t--) {
        int t = 10;
        t--;
        printf("t = %d\n", t);      // t = 9
    }

    printf("main: t = %d\n", t);    // t = -1
    return 0;
}
