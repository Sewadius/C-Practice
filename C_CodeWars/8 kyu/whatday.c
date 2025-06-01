#include <stdio.h>

// 8 kyu - Return the day
char* whatday(int num)
{
    switch (num) {
        case 1: return "Sunday";
        case 2: return "Monday";
        case 3: return "Tuesday";
        case 4: return "Wednesday";
        case 5: return "Thursday";
        case 6: return "Friday";
        case 7: return "Saturday";
        default: return "Wrong, please enter a number between 1 and 7";
    }
}

int main(void)
{
    int num;
    printf("Enter a day number: ");
    scanf("%d", &num);

    printf("%s\n", whatday(num));
    return 0;
}
