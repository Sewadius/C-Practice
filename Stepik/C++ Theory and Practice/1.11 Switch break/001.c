#include <stdio.h>

int main(void)
{
    char notes[][10] = {"до", "ре", "ми", "фа", "соль", "ля", "си"};
    size_t number;

    scanf("%zu", &number);
    printf("%s", notes[number - 1]);

    return 0;   
}
