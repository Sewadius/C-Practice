#include <stdio.h>

int get_volume(int h, int w, int d)
{
    return h * w * d;
}

int main(void)
{
    int height, width, depth;
    scanf("%d%d%d", &height, &width, &depth);
    printf("%d\n", get_volume(height, width, depth));
    return 0;
}
