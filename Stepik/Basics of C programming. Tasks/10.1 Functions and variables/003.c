#include<stdio.h>

int factorial(int p) {
    int result = 1;

    while (p > 0)
        result *= p--;

    return result;
}

int combin(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main(void){
    int n, k;

    scanf("%d %d", &n, &k);
    printf("%d\n", combin(n, k));

    return 0;
}
