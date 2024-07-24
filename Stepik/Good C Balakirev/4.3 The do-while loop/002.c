#include <stdio.h>

int main(void)
{
    short num;
    unsigned short sum = 0;
    
    do {
        scanf("%hd", &num);
        if (num > 0) sum += num;
    } while (num != 13);

    printf("%u", sum);
    return 0;
}
