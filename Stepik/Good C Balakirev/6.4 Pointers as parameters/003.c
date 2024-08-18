#include <stdio.h>

// Поиск первого пробельного символа в строке
const char* find_space(const char* buf) 
{
    while (*buf != '\0') {
        if (*buf == ' ')
            return buf;
        buf++;
    }

    return NULL;
}

int main(void)
{
    char str[] = "Hello World!";
    const char* res = find_space(str);

    printf("Initial string: %s\n", str);
    
    if (res) {
        printf("res = %p\n", res);
        printf("String from the first space: \"%s\"\n", res);
    } else 
        printf("No space found in the string.\n");
    
    return 0;
}
