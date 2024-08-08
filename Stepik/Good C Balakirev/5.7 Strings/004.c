#include <stdio.h>
#define CH 's'
#define LENGTH 100

int main(void)
{
    // Здесь продолжайте программу
    char str[LENGTH] = "Best string!";

    for (int i = 0; i < LENGTH; ++i) {
        if (str[i] == CH) {
            for (int j = i + 1; j < LENGTH; ++j)
                str[j - 1] = str[j];
        }
    }

    puts(str);          // "Bet tring!"

    // __ASSERT_TESTS__ 
    return 0;
}
