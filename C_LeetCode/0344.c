#include <stdio.h>
#define LENGTH 5

// 344. Reverse String
void reverseString(char* s, int sSize)
{
    for (int i = 0; i < sSize / 2; ++i) {
        char temp = s[i];
        s[i] = s[sSize - i - 1];
        s[sSize - i - 1] = temp;
    }
}

int main(void)
{
    char s[] = "hello";
    printf("Initial string: %s\n", s);

    reverseString(s, LENGTH);
    
    printf("Reversed string: ");

    for (int i = 0; i < LENGTH; ++i)
        printf("%c", s[i]);

    return 0;
}
