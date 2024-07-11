#include <stdio.h>

int main(void)
{
    unsigned char flags, mask;
    scanf("%hhu %hhu", &flags, &mask);
    printf("%s", (flags & mask) != 0 ? "yes" : "no");
    return 0;
}
