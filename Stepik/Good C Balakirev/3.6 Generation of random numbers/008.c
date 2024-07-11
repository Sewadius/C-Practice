#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    // Здесь продолжайте программу
    for (int i = 0; i < MAX; i++) {
        int y = rand() % (b - a + 1) + a;
        printf("%d ", y);
    }
    
    return 0;
}
