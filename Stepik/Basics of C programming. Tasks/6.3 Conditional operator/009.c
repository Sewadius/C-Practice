#include <stdio.h>

int main() {
    unsigned char age;
    scanf("%hhu", &age);

    if (age < 7) puts("дошкольник");
    else if (age < 19) puts("школьник");
    else if (age < 60) puts("рабочий");
    else puts("пенсионер");
    
    return 0;
}
