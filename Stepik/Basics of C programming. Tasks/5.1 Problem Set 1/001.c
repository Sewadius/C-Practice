#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    int 
        edge = x * x,
        surface = 6 * edge,
        volume = edge * x;

    printf("%d %d %d\n", edge, surface, volume);
    return 0;
}
