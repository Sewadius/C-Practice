#include <stdio.h>

int main(void)
{
    int var;
    scanf("%d", &var);

    // Здесь продолжайте программу
    int* ptr_var = &var;
    char* ptr_ch = (char*)ptr_var;
    printf("%d", *ptr_ch);

    // __ASSERT_TESTS__ 
    return 0;
}
