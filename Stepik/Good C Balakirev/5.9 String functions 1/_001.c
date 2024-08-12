#include <stdio.h>
#include <string.h>

// Output the length of the entered string with spaces
int main(void)
{
    char str[100];
    printf("Program outputs the length of the string.");
    printf("\nEnter the string: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    printf("String length: %zu\n", strlen(str));
    printf("\nPress Enter for exit..."); getchar();
    return 0;
}
