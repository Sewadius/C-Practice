#include <stdio.h>
#include <string.h>

// Использование strncmp для сравнения начала строк
int main(void)
{
    const char* strings[] = {
        "Ship", "Shopping", "Shematic", "Super", "Car", "Sherif"
    };

    for (int i = 0; i < sizeof strings / sizeof *strings; ++i)
        if (strncmp(strings[i], "Sh", 2) == 0)
            puts(strings[i]);

    return 0;
}
