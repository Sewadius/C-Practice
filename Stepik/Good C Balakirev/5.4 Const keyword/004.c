#include <stdio.h>

int main(void)
{
    int ar[100];
    int* const ptr_ar = ar;

    // Здесь продолжайте программу
    int n, i = 0;
    while (1) {
        scanf("%d", &n);
        if (n == 78) break;
        *(ptr_ar + i) = n;
        ++i;
    } 
    
    for (int j = 0; j < i; ++j)
        printf("%d ", *(ar + j));
        
    return 0;
}
