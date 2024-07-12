#include <stdio.h>

// Problem #2 - Sum in Loop
int main(void)
{
    short total;
    scanf("%hd", &total);

    int sum = 0;
    short number;

    for (int i = 0; i < total; i++) {
        scanf("%hd", &number);
        sum += number;
    }

    printf("%d", sum);
    return 0;
}
