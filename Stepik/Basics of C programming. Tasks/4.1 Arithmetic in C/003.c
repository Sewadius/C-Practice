#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int 
        a = n / 100,
        b = n / 10 % 10,
        c = n % 10;
    
    printf("%d\n", a + b + c);
    return 0;
}
