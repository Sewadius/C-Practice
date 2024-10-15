#include <stdio.h>
#include <string.h>

int main() {
    char str1[31], str2[4];
    scanf("%s", str1);
    scanf("%s", str2);
    strcat(str1, ".");
    printf("%s\n", strcat(str1, str2));
    return 0;
}
