#include <stdio.h>

// Problem #3 - Sums in Loop
int main(void)
{
    short N;
    scanf("%hd", &N);
    int a, b, result[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &a, &b);
        result[i] = a + b;
    }

    for (int i = 0; i < N; i++) 
        printf("%d ", result[i]);

    return 0;
}
