#include <stdio.h>
#include <stdlib.h>

int main() {
    short x1, x2;
    scanf("%hd %hd", &x1, &x2);
    printf("%d\n", abs(x2 - x1)); 
    return 0;
}
