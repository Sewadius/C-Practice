#include <stdio.h>

int main() {
    int h, m;
    scanf("%d%d", &h, &m);

    int mins = h * 60 + m;
    int seconds = mins * 60;

    printf("%d\n%d\n", mins, seconds);

    return 0;
}
