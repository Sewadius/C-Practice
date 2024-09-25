#include <stdio.h>

int main() {
    unsigned char b1, b2, b3;
    scanf("%hhu%hhu%hhu", &b1, &b2, &b3);

    _Bool 
        b_1 = b1 == 2 && b2 == 4 && b3 == 8,
        b_2 = b1 == 2 && b2 == 8 && b3 == 4,
        b_3 = b1 == 4 && b2 == 2 && b3 == 8,
        b_4 = b1 == 4 && b2 == 8 && b3 == 2,
        b_5 = b1 == 8 && b2 == 2 && b3 == 4,
        b_6 = b1 == 8 && b2 == 4 && b3 == 2;

    if (b_1 || b_2 || b_3 || b_4 || b_5 || b_6) {
        puts("open");
        return 0;
    }

    puts("closed");
    return 0;
}
