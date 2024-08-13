#include <stdio.h>

int fact(int n)
{
    if (n < 0) 
        return -1;

    int res = 1;
    while (n > 0) 
        res *= n--;
    
    return res;
}

int main(void)
{
    printf("%d\n", fact(6));
    return 0;
}
