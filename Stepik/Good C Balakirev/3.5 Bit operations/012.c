#include <stdio.h>

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);

    // Здесь продолжайте программу
    unsigned char res = bits ^ 9;
    printf("%d", res);
    return 0;
}
