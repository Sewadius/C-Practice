#include <stdio.h>

// Указатель лишь для чтения данных
int main(void)
{
    short ar[] = {4, 3, 2, 1, 5, 6, 7};
    const short* ptr_ar;    // Нельзя менять данные по указателю

    ptr_ar = ar;
    short x = ptr_ar[0];

    printf("ar[0] = %d\n", x);
    ptr_ar++;               // Можно менять адрес указателя

    printf("ar[1] = %d\n", *ptr_ar);
    return 0;
}
