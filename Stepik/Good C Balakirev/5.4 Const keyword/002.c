#include <stdio.h>

// Указатель с неизменным адресом
int main(void)
{
    short ar[] = {4, 3, 2, 1, 5, 6, 7};
    short* const ptr_ar = ar;           // Адрес указателя менять нельзя
    const short* const ptr_ar2 = ar;    // Адрес нельзя менять, только для чтения

    printf("ar[0] = %d\n", *ptr_ar);
    printf("ar[0] = %d\n", *ptr_ar2);
    return 0;
}
