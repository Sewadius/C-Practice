#include <stdio.h>

int factorial(int);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", factorial(n));
    return 0;
}

int factorial(int k) {
    int result = 1;

    while (k > 0)
        result *= k--; 

    return result;
}
