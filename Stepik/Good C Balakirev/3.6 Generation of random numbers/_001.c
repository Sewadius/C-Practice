#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DICE 6

// Запрашиваемое количество бросков 6-ти гранного кубика
int main(void)
{
    srand(time(NULL));
    int count, i = 0;

    printf("Number of throws: ");
    scanf("%d", &count);
    printf("Throws: ");

    do {
        int throw = rand() % DICE + 1;
        printf("%d ", throw);
    } while (++i < count);

    return 0;
}
