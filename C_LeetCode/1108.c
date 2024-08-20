#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1108. Defanging an IP Address
char* defangIPaddr(char* address)
{
    const char* replacement = "[.]";
    int count = 0;
    size_t size = strlen(address);

    // Count occurrences of '.'
    for (int i = 0; i < size; ++i) {
        if (address[i] == '.')
            count++;
    }

    // Allocate memory for the new string
    char* result = (char*)malloc(size + count * 2 + 1);  // +1 for the null terminator

    if (!result) {
        return NULL;  // Handle memory allocation failure
    }

    // Fill the new string with defanged IP address
    for (int i = 0, j = 0; i < size; ++i) {
        if (address[i] == '.') {
            strcpy(&result[j], replacement);
            j += 3;
        } else {
            result[j++] = address[i];
        }
    }

    result[size + count * 2] = '\0';  // Null-terminate the string

    return result;
}

int main(void)
{
    char address[] = "1.1.1.1";
    char* result = defangIPaddr(address);

    if (result) {
        printf("Defanged IP Address: %s\n", result);
        free(result);  // Free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
