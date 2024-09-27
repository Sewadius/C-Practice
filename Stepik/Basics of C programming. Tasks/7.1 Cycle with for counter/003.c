#include <stdio.h>

int main() {
    short k, m;
    size_t total = 0;
    
    scanf("%hd %hd", &k, &m);

    for (short i = k; i <= m; ++i)
        if (i > 0) { 
            ++total; printf("%d ", i);
        }

    printf("\n%zu\n", total);
    return 0;
}
