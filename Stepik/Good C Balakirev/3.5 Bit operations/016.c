#include <stdio.h>

int main(void)
{
    unsigned char flags, mask;
    scanf("%hhu %hhu", &flags, &mask);
    printf("%s", (flags & mask) == mask ? "yes" : "no");
    return 0;
}
