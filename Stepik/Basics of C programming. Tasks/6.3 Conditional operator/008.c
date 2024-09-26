#include <stdio.h>
#include <stdbool.h>

int main() {
    unsigned char day, month;
    scanf("%hhu %hhu", &day, &month);

    bool isCorrect = false;

    if (month == 2) {
        if (1 <= day && day <= 29) isCorrect = true;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (1 <= day && day <= 30) isCorrect = true;
    } else if (month > 0 && month <= 12) {
        if (1 <= day && day <= 31) isCorrect = true;
    }

    printf("%s\n", isCorrect ? "correct" : "error");
    return 0;
}
