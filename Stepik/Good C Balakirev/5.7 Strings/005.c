#include <stdio.h>
#define LENGTH 50
#define WORD_L 4

int main(void)
{
    // Здесь продолжайте программу
    char str[LENGTH] = "best string!";
    const char WORD[] = "The ";

    for (int i = LENGTH; i >= 0; --i)
        str[i + WORD_L] = str[i];

    for (int i = 0; i < WORD_L; ++i)
        str[i] = WORD[i];

    puts(str);

    // __ASSERT_TESTS__ 
    return 0;
}
