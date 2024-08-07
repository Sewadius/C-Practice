#include <stdio.h>
#define LENGTH 100

int main(void)
{
    // Здесь продолжайте программу
    char str[LENGTH] = "Best string!";

    for (int i = 0; i < LENGTH; ++i)
        if (str[i] == '\0') {
            str[i - 1] = '.'; break;
        }

    puts(str);
    // __ASSERT_TESTS__ 
    return 0;
}
