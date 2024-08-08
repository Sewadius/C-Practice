#include <stdio.h>

// Ввод с помощью scanf
int main(void)
{
    char bf[10];
    scanf("%9s", bf);       // Максимальный размер прочитанных данных
    puts(bf);
    return 0;
}
