#include <stdio.h>
#define MUL_VAR_NAME(A, B)      mul_ ## A ## _ ## B 

int main(void)
{
    // Здесь продолжайте программу
    int var1, var2;
    scanf("%d %d", &var1, &var2);
    int MUL_VAR_NAME(var1, var2) = var1 * var2;
    printf("%d", mul_var1_var2);

    //__ASSERT_TESTS__ 
    return 0;
}
