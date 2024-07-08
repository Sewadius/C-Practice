#include <stdio.h>

int main(void)
{
    int a1;         // Первый член прогрессии
    int a50;        // 50-й член прогрессии

    scanf("%d, %d", &a1, &a50);
    int sum = (a1 + a50) * 25;
    printf("%d", sum);
    return 0;
}
