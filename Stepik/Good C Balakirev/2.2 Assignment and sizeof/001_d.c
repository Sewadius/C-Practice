// Использование sizeof
#include <stdio.h>

int main(void)
{
    float var_f;
    var_f = 10.0f;

    int size_float = sizeof(float);

    printf("Size of float: %d bytes\n", size_float);
    printf("Size of var_f: %d bytes\n", sizeof var_f);
    printf("Size of char: %d byte", sizeof(char));

    getchar();
    return 0;
}
